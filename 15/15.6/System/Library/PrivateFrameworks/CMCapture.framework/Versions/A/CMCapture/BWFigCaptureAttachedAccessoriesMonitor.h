@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject

@property (readonly, nonatomic) char walletAccessoryConnected;
@property (readonly, nonatomic) char batteryPackAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (void)dealloc;
- (id)init;

@end
