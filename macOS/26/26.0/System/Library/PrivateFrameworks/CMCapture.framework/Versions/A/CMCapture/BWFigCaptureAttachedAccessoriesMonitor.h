@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject

@property (readonly, nonatomic) BOOL walletAccessoryConnected;
@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;

+ (id)sharedAttachedAccessoriesMonitor;
+ (void)initialize;

- (void)dealloc;
- (id)init;

@end
