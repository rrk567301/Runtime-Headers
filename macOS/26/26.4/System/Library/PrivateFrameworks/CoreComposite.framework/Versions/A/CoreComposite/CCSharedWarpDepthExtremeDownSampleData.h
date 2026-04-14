@interface CCSharedWarpDepthExtremeDownSampleData : CCWarpDepthExtremeDownSampleData {
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; } *_sharedData;
}

- (id)initWithSharedData:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; } *)a0 textureArray:(id)a1;
- (void)setValidTextureDims:(SEL)a0;
- (void /* unknown type, empty encoding */)validTextureDims;

@end
