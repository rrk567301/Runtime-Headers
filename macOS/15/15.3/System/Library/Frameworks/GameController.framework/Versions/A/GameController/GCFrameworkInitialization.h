@interface GCFrameworkInitialization : NSObject

+ (void)controllerManagerDidOpen;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (id)initOperationQueue;
+ (id)initQueue;
+ (void)initializeFramework;
+ (void)listenForObservers;

@end
