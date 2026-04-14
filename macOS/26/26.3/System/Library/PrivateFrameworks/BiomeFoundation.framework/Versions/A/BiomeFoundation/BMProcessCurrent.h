@class NSNumber;

@interface BMProcessCurrent : BMProcess {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnLegacyDirectAccessLock;
    NSNumber *_reliesOnLegacyDirectAccess;
}

@property (readonly, nonatomic) BOOL isManagedByLaunchd;
@property (readonly, nonatomic) BOOL isRunningInUserContext;
@property (readonly, nonatomic) BOOL canAccessAppleKeyStore;
@property (readonly, nonatomic) BOOL isManagedByRunningBoard;

- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)reliesOnDirectAccessForDomain:(unsigned long long)a0;
- (BOOL)allowedToHaveDatavaultEntitlement;
- (id)runningBoardAssertionWithExplanation:(id)a0;
- (void)enforceDatavaultEntitlementRestrictions;
- (void).cxx_destruct;
- (unsigned long long)_session;

@end
