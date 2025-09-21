@class NSTimer, NSMapTable;

@interface _FETreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironments;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_validateLockedEnvironments;
- (char)isEnvironmentLocked:(id)a0;
- (void)lockEnvironmentTree:(id)a0;
- (char)unlockEnvironmentTree:(id)a0;

@end
