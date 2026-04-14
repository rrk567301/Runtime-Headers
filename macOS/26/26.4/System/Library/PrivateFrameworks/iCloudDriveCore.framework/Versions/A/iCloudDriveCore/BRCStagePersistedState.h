@interface BRCStagePersistedState : BRCPersistedState {
    long long _latestGCStartTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)initWithLatestGCStartTime:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (long long)timeSinceLatestGCStartTime;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
