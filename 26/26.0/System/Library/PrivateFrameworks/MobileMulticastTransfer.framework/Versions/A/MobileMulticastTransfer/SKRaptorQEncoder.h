@interface SKRaptorQEncoder : NSObject {
    struct ioctx { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; BOOL x6; BOOL x7; } *_inputIO;
    struct nanorq { } *_rq;
}

- (void)dealloc;
- (BOOL)_writeESI:(unsigned int)a0 sbn:(unsigned char)a1 rq:(struct nanorq { } *)a2 inputIO:(struct ioctx { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; BOOL x6; BOOL x7; } *)a3 outputFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a4 error:(id *)a5;
- (BOOL)_writeSBN:(unsigned char)a0 rq:(struct nanorq { } *)a1 repairFactor:(unsigned long long)a2 inputIO:(struct ioctx { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; BOOL x6; BOOL x7; } *)a3 outputFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a4 error:(id *)a5;
- (id)encodeInputFile:(id *)a0;
- (void)encodeWithInputURL:(id)a0 packetSize:(unsigned long long)a1 repairFactor:(unsigned long long)a2 dispatchQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)encodeWithInputURL:(id)a0 packetSize:(unsigned long long)a1 repairFactor:(unsigned long long)a2 error:(id *)a3;
- (id)generatePacketWithESI:(unsigned int)a0 sourceBlock:(unsigned char)a1 error:(id *)a2;
- (id)initWithInputURL:(id)a0 symbolSize:(unsigned long long)a1 error:(id *)a2;

@end
