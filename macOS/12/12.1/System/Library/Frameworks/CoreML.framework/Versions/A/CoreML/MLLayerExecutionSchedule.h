@class NSString;

@interface MLLayerExecutionSchedule : NSObject

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long layerError;

- (void).cxx_destruct;
- (id)initWithLayerError:(long long)a0;
- (id)initWithScheduledDevice:(id)a0 layerName:(id)a1 layerError:(long long)a2;

@end
