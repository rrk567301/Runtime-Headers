@protocol OSIPowerButtonMonitorDelegate;

@interface OSIPowerButtonMonitor : NSObject

@property (weak) id<OSIPowerButtonMonitorDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_registerForPowerButtonHIDEvent;

@end
