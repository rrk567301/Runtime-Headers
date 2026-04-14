@interface GCFrameworkInitialization : NSObject

+ (void)listenForObservers;
+ (id)initQueue;
+ (void)initializeFramework;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (void)controllerManagerDidOpen;
+ (id)initOperationQueue;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)enableKeyboardSupportWithReason:(long long)a0;

@end
