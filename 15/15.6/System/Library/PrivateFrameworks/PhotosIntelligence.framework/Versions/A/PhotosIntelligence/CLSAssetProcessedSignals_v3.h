@interface CLSAssetProcessedSignals_v3 : CLSAssetProcessedSignals_v1 <CLSNSFWProcessedSignals>

@property (nonatomic) unsigned char isRecallinglyNSFWExplicit : 2;
@property (nonatomic) unsigned char isPreciselyNSFWExplicit : 2;
@property (nonatomic) unsigned char isNSFWExplicit : 2;

@end
