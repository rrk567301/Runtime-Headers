@interface UVCFrameProcessorMJPEGDecodeGVA : UVCFrameProcessorDecode {
    struct _AVFJPG_MediaAcceleratorInterface { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *_gvaInterface;
    struct { struct _AVF_MediaAcceleratorInterface *x0; void *x1; struct { unsigned int x0; unsigned int x1; unsigned int x2[8]; unsigned int x3; struct **x4; unsigned long long x5; BOOL x6; } x2; struct { unsigned int x0; struct **x1; unsigned int x2; struct **x3; } x3; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x4; struct { unsigned int x0; } x5; unsigned int x6; unsigned int x7; void /* function */ *x8; void *x9; void /* function */ *x10; void *x11; unsigned int x12; struct __CVBuffer *x13; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x14; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x15; unsigned int x16; } *_gvaJPEGDecoder;
    char _skipGVADecode;
}

- (void)dealloc;
- (void)invalidate:(id /* block */)a0;
- (id)serialize;
- (void)handleStreamData:(id)a0 handler:(id /* block */)a1;
- (id)initWithDestination:(id)a0 queue:(id)a1 streamFormat:(id)a2 source:(id)a3 pixelFormat:(unsigned long long)a4 colorAttributes:(id)a5;
- (char)setupDecompressionSession:(id)a0 compressedData:(char *)a1 compressedDataSize:(unsigned int)a2 error:(id *)a3;

@end
