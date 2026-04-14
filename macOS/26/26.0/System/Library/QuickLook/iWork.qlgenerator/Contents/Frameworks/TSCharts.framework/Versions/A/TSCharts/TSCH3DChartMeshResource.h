@class TSCH3DChartMeshSharedChildResource;

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource *_shared;
}

+ (id)resourceWithSharedResource:(id)a0;

- (id)get;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)caching;
- (struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })bufferInfo;
- (void)flushMemory;
- (id)initWithSharedResource:(id)a0;

@end
