@class NSArray;

@interface VSTProxyRendererRasterizationRateInfoDump : VSTSplatVersionDump

@property (retain, nonatomic) NSArray *cones;
@property (retain, nonatomic) NSArray *boxes;
@property (nonatomic) float defaultRasterizationRate;
@property (nonatomic) BOOL useOriginalMap;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
