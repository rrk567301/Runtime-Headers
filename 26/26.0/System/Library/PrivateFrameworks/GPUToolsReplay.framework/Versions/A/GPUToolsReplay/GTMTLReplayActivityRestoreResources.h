@interface GTMTLReplayActivityRestoreResources : GTMTLReplayActivity {
    const struct GTResourceRestoreRequest { unsigned long long x0; unsigned long long x1; unsigned long long x2; char *x3; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { struct GTMTLTensorSlice { struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; unsigned char x2; char x3[7]; } x1; struct { unsigned short x0; unsigned short x1; unsigned short x2[3]; unsigned short x3[3]; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned char x8; unsigned char x9; } x2; struct { unsigned int x0; unsigned int x1; } x3; struct { unsigned long long x0; unsigned long long *x1; unsigned int x2; char x3[4]; } x4; } x4; } *_requests;
    int _requestCount;
}

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (id)initWithRequests:(const struct GTResourceRestoreRequest { unsigned long long x0; unsigned long long x1; unsigned long long x2; char *x3; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { struct GTMTLTensorSlice { struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; } x0; struct GTMTLTensorExtents { unsigned long long x0; unsigned long long x1[16]; } x1; unsigned char x2; char x3[7]; } x1; struct { unsigned short x0; unsigned short x1; unsigned short x2[3]; unsigned short x3[3]; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned char x8; unsigned char x9; } x2; struct { unsigned int x0; unsigned int x1; } x3; struct { unsigned long long x0; unsigned long long *x1; unsigned int x2; char x3[4]; } x4; } x4; } *)a0 count:(int)a1;
- (void)outputToLog:(id)a0;
- (void)signpostIntervalBegin:(unsigned long long)a0;

@end
