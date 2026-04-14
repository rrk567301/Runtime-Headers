@class NSNumber;

@interface BMProcessCurrent : BMProcess {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnLegacyDirectAccessLock;
    NSNumber *_reliesOnLegacyDirectAccess;
}

@property (readonly, nonatomic) BOOL isManagedByLaunchd;
@property (readonly, nonatomic) BOOL isRunningInUserContext;
@property (readonly, nonatomic) BOOL canAccessAppleKeyStore;
@property (readonly, nonatomic) BOOL isManagedByRunningBoard;

- (BOOL)reliesOnDirectAccessForDomain:(unsigned long long)a0;
- (BOOL)allowedToHaveDatavaultEntitlement;
- (unsigned long long)_session;
- (void)enforceDatavaultEntitlementRestrictions;
- (void).cxx_destruct;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)runningBoardAssertionWithExplanation:(id)a0;

@end
