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
- (void)enforceDatavaultEntitlementRestrictions;
- (BOOL)reliesOnDirectAccessForDomain:(unsigned long long)a0;
- (id)runningBoardAssertionWithExplanation:(id)a0;
- (unsigned long long)_session;
- (void).cxx_destruct;
- (BOOL)allowedToHaveDatavaultEntitlement;

@end
