@class NSObject, VCPImageBackboneAnalyzer;
@protocol OS_dispatch_queue;

@interface VCPMADImageEmbeddingResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VCPImageBackboneAnalyzer *_imageBackbone;
    unsigned long long _version;
    unsigned long long _computeUnits;
}

@property (readonly, nonatomic) VCPImageBackboneAnalyzer *imageBackbone;

+ (id)identifierWithVersion:(unsigned long long)a0 computeUnits:(unsigned long long)a1;
+ (id)sharedResourceForRevision:(unsigned long long)a0;
+ (id)sharedResourceForRevision:(unsigned long long)a0 computeUnits:(unsigned long long)a1;

- (void)purge;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;
- (id)initWithRevision:(unsigned long long)a0 computeUnits:(unsigned long long)a1;

@end
