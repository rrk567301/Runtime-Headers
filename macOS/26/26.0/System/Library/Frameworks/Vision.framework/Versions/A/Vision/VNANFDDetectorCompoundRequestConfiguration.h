@class NSDictionary, NSMutableArray, NSString;

@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (readonly, nonatomic) NSMutableArray *originalRequests;
@property (copy, nonatomic) NSString *detectorType;

- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
