#include <stdlib.h>
#include "tag25h8.h"

static uint64_t codedata[129] = {
   0x00000000014de1afUL,
   0x0000000001dce774UL,
   0x00000000006bed39UL,
   0x000000000189f8c3UL,
   0x000000000018fe88UL,
   0x0000000000a8044dUL,
   0x0000000001c60fd7UL,
   0x0000000000e41b61UL,
   0x0000000001732126UL,
   0x0000000000912cb0UL,
   0x0000000001203275UL,
   0x0000000001095ad8UL,
   0x0000000000b66c27UL,
   0x0000000001f9b728UL,
   0x000000000117c2b2UL,
   0x000000000071e550UL,
   0x00000000013d0229UL,
   0x0000000001262a8cUL,
   0x0000000000d33bdbUL,
   0x0000000001f14765UL,
   0x00000000008eb504UL,
   0x000000000024eeb6UL,
   0x00000000001c7ef3UL,
   0x00000000013a8a7dUL,
   0x00000000015fc9f4UL,
   0x000000000066fde1UL,
   0x00000000007565bbUL,
   0x00000000016bba22UL,
   0x0000000001adc94dUL,
   0x0000000000599ec6UL,
   0x000000000095b5daUL,
   0x000000000160d2b3UL,
   0x0000000000a41db4UL,
   0x00000000008d4617UL,
   0x0000000000766e7aUL,
   0x000000000105743fUL,
   0x0000000000c0ed68UL,
   0x0000000001ce196cUL,
   0x0000000000ec24f6UL,
   0x0000000000631748UL,
   0x00000000018122d2UL,
   0x000000000184a33dUL,
   0x00000000003c68e4UL,
   0x00000000008a683dUL,
   0x00000000007988b7UL,
   0x0000000001c3d48eUL,
   0x00000000017cd60bUL,
   0x000000000190cfceUL,
   0x00000000001f6f65UL,
   0x0000000001e7e17bUL,
   0x0000000000ea2610UL,
   0x0000000001d80ab4UL,
   0x0000000001efeb10UL,
   0x0000000000956244UL,
   0x00000000018346e8UL,
   0x000000000016097bUL,
   0x0000000001c912e1UL,
   0x00000000013b15dbUL,
   0x0000000000b8a2d5UL,
   0x0000000001801578UL,
   0x0000000001e16c03UL,
   0x0000000001fe3bb7UL,
   0x00000000010ee826UL,
   0x00000000018f5c46UL,
   0x00000000010c8312UL,
   0x0000000000f3e8f2UL,
   0x0000000000ef9c2bUL,
   0x00000000019c1435UL,
   0x0000000001b1531aUL,
   0x00000000010728f1UL,
   0x00000000007f369aUL,
   0x0000000001f55c90UL,
   0x00000000011ce09cUL,
   0x00000000004aff50UL,
   0x0000000001082d15UL,
   0x0000000001ed3bc8UL,
   0x00000000019a7247UL,
   0x0000000000095fb5UL,
   0x0000000000b9fabbUL,
   0x00000000017ef5b2UL,
   0x000000000050e996UL,
   0x0000000000ed0d78UL,
   0x0000000000a2eb82UL,
   0x0000000000697f47UL,
   0x000000000199d4a9UL,
   0x000000000147b71bUL,
   0x00000000007eabc0UL,
   0x0000000000b32d6aUL,
   0x0000000000c365c4UL,
   0x00000000014c4071UL,
   0x0000000001959663UL,
   0x0000000000f91146UL,
   0x00000000007b0b9cUL,
   0x00000000001d9274UL,
   0x00000000001045f1UL,
   0x0000000001e54ac6UL,
   0x00000000005e5ca9UL,
   0x0000000001df24a1UL,
   0x0000000000d3ee4dUL,
   0x000000000111c349UL,
   0x00000000014b6335UL,
   0x0000000000979b86UL,
   0x0000000000024edbUL,
   0x000000000198bc6aUL,
   0x0000000000be9f38UL,
   0x000000000103bfc2UL,
   0x00000000014fd2cdUL,
   0x0000000001dffe53UL,
   0x0000000000fe8796UL,
   0x00000000016a3180UL,
   0x00000000014b8e11UL,
   0x00000000010988a0UL,
   0x0000000001e2cd89UL,
   0x0000000000e28138UL,
   0x0000000001a0a9ebUL,
   0x000000000150349eUL,
   0x000000000006969eUL,
   0x00000000005ae861UL,
   0x00000000007873bdUL,
   0x0000000001ff2f5dUL,
   0x000000000082c850UL,
   0x00000000009d3955UL,
   0x00000000017d7117UL,
   0x00000000017b1d21UL,
   0x00000000012fe49bUL,
   0x00000000008bf92aUL,
   0x0000000001851f99UL,
   0x00000000013ffe68UL,
   0x0000000001c3ad2fUL,
};

apriltag_family_t *tag25h8_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tag25h8");
   tf->h = 8;
   tf->ncodes = 129;
   tf->codes = codedata;
   tf->nbits = 25;
   tf->bit_x = calloc(25, sizeof(uint32_t));
   tf->bit_y = calloc(25, sizeof(uint32_t));
   tf->bit_x[0] = 1;
   tf->bit_y[0] = 1;
   tf->bit_x[1] = 2;
   tf->bit_y[1] = 1;
   tf->bit_x[2] = 3;
   tf->bit_y[2] = 1;
   tf->bit_x[3] = 4;
   tf->bit_y[3] = 1;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = 2;
   tf->bit_x[5] = 3;
   tf->bit_y[5] = 2;
   tf->bit_x[6] = 5;
   tf->bit_y[6] = 1;
   tf->bit_x[7] = 5;
   tf->bit_y[7] = 2;
   tf->bit_x[8] = 5;
   tf->bit_y[8] = 3;
   tf->bit_x[9] = 5;
   tf->bit_y[9] = 4;
   tf->bit_x[10] = 4;
   tf->bit_y[10] = 2;
   tf->bit_x[11] = 4;
   tf->bit_y[11] = 3;
   tf->bit_x[12] = 5;
   tf->bit_y[12] = 5;
   tf->bit_x[13] = 4;
   tf->bit_y[13] = 5;
   tf->bit_x[14] = 3;
   tf->bit_y[14] = 5;
   tf->bit_x[15] = 2;
   tf->bit_y[15] = 5;
   tf->bit_x[16] = 4;
   tf->bit_y[16] = 4;
   tf->bit_x[17] = 3;
   tf->bit_y[17] = 4;
   tf->bit_x[18] = 1;
   tf->bit_y[18] = 5;
   tf->bit_x[19] = 1;
   tf->bit_y[19] = 4;
   tf->bit_x[20] = 1;
   tf->bit_y[20] = 3;
   tf->bit_x[21] = 1;
   tf->bit_y[21] = 2;
   tf->bit_x[22] = 2;
   tf->bit_y[22] = 4;
   tf->bit_x[23] = 2;
   tf->bit_y[23] = 3;
   tf->bit_x[24] = 3;
   tf->bit_y[24] = 3;
   tf->width_at_border = 7;
   tf->total_width = 9;
   tf->reversed_border = false;
   return tf;
}

void tag25h8_destroy(apriltag_family_t *tf)
{
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}