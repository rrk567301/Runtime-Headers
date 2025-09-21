@class NSNumber;

@interface BMProcessCurrent : BMProcess {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reliesOnLegacyDirectAccessLock;
    NSNumber *_reliesOnLegacyDirectAccess;
}

@property (readonly, nonatomic) char isManagedByLaunchd;
@property (readonly, nonatomic) char isRunningInUserContext;
@property (readonly, nonatomic) char canAccessAppleKeyStore;
@property (readonly, nonatomic) char isManagedByRunningBoard;

- (void).cxx_destruct;
- (unsigned long long)_session;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (char)reliesOnDirectAccessForDomain:(unsigned long long)a0;
- (id)runningBoardAssertionWithExplanation:(id)a0;

@end
