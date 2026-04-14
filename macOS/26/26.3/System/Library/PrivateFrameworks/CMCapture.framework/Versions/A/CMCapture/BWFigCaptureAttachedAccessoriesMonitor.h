@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject

@property (readonly, nonatomic) BOOL walletAccessoryConnected;
@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (id)init;
- (void)dealloc;

@end
