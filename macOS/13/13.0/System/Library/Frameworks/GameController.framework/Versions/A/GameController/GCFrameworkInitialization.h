@interface GCFrameworkInitialization : NSObject

+ (void)controllerManagerDidOpen;
+ (id)initQueue;
+ (id)initOperationQueue;
+ (void)listenForObservers;
+ (void)enableControllerSupportWithReason:(long long)a0;
+ (void)enableMouseSupportWithReason:(long long)a0;
+ (void)enableKeyboardSupportWithReason:(long long)a0;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (void)initializeFramework;

@end
