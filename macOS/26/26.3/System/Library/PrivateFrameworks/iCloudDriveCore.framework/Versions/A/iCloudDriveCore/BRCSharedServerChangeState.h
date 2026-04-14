@interface BRCSharedServerChangeState : BRCServerChangeState

@property (nonatomic) BOOL everCaughtUp;
@property (nonatomic) BOOL newlyCreatedDuringInitialSync;

+ (BOOL)supportsSecureCoding;

- (void)forgetChangeTokens;
- (id)descriptionWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServerSyncState:(id)a0;
- (void)updateWithServerChangeToken:(id)a0 clientRequestID:(unsigned long long)a1 caughtUp:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
