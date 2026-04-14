@class DeviceSelectionTriggerContext;

@interface DeviceSelectionTriggerSource : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) DeviceSelectionTriggerContext *context;

- (void).cxx_destruct;
- (id)initWithTriggerType:(long long)a0 context:(id)a1;

@end
