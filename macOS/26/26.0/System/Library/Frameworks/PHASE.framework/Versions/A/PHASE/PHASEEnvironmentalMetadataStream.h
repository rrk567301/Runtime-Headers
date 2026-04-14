@class PHASEEngine;

@interface PHASEEnvironmentalMetadataStream : NSObject <NSCopying> {
    struct { void /* unknown type, empty encoding */ vector; } _clientOrientation;
    struct { void /* unknown type, empty encoding */ vector; } _internalOrientation;
}

@property (readonly, weak, nonatomic) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long mData; } geoEnvironmentalMetadataStreamHandle;
@property (nonatomic) struct { } orientation;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientation:(struct { })a0;
- (id)init;
- (struct { })orientation;
- (id)initInternal;
- (id).cxx_construct;
- (id)initWithEngine:(id)a0;
- (void)submit:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)calculateByteCountInternal:(id)a0;
- (void)deserializeBinaryMetadataToCFormatInternal:(void *)a0 byteCount:(unsigned long long)a1 outMetadata:(struct EnvironmentalMetadata { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned long long *x4; unsigned long long **x5; unsigned int *x6; float *x7; float *x8; float *x9; float *x10; float *x11; float *x12; float *x13; float *x14; float x15[4]; BOOL *x16; } *)a2;
- (void)deserializeCFormatMetadataInternal:(struct EnvironmentalMetadata { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned long long *x4; unsigned long long **x5; unsigned int *x6; float *x7; float *x8; float *x9; float *x10; float *x11; float *x12; float *x13; float *x14; float x15[4]; BOOL *x16; } *)a0 outMetadata:(id)a1;
- (void)deserializeMetadataInternal:(void *)a0 byteCount:(unsigned long long)a1 outMetadata:(id)a2;
- (void *)serializeMetadataInternal:(id)a0 byteCount:(unsigned long long)a1;
- (struct EnvironmentalMetadata { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned long long *x4; unsigned long long **x5; unsigned int *x6; float *x7; float *x8; float *x9; float *x10; float *x11; float *x12; float *x13; float *x14; float x15[4]; BOOL *x16; } *)serializeMetadataToCFormatInternal:(id)a0 allocateFunc:(struct function<void *(unsigned long, unsigned long long &)> { struct __value_func<void *(unsigned long, unsigned long long &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;

@end
