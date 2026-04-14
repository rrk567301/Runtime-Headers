@class NSTimer, NSMapTable;

@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironments;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)_validateLockedEnvironments;
- (BOOL)isEnvironmentLocked:(id)a0;
- (void)lockEnvironmentTree:(id)a0;
- (BOOL)unlockEnvironmentTree:(id)a0;

@end
