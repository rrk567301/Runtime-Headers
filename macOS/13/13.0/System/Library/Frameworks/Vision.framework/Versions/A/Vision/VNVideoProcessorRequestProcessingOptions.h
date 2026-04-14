@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying>

@property (copy) VNVideoProcessorCadence *cadence;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_createVCPVideoProcessorRequestConfiguration;

@end
