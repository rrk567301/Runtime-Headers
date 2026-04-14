@class TSCH3DChartMeshSharedChildResource;

@interface TSCH3DChartMeshResource : TSCH3DResource {
    TSCH3DChartMeshSharedChildResource *_shared;
}

+ (id)resourceWithSharedResource:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (id)get;
- (struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })bufferInfo;
- (void)flushMemory;
- (int)caching;
- (id)initWithSharedResource:(id)a0;

@end
