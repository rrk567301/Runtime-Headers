@class NSString, ADImageDimensions;

@interface ADPipelineParameters : NSObject

@property (retain, nonatomic) ADImageDimensions *requestedDimensions;
@property (nonatomic) unsigned long long outputDepthUnits;
@property (readonly, retain, nonatomic) NSString *deviceName;

- (void).cxx_destruct;
- (id)init;
- (id)initForDevice:(id)a0;

@end
