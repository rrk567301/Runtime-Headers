@interface CNCDCoreDataDeprecations : NSObject

+ (id)newConfinedContext;
+ (BOOL)isConfinedContext:(id)a0;
+ (void)lockContext:(id)a0;
+ (void)unlockContext:(id)a0;
+ (BOOL)tryLockContext:(id)a0;
+ (void)lockCoordinator:(id)a0;
+ (void)unlockCoordinator:(id)a0;

@end
