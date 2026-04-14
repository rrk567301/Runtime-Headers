@interface BRCStagePersistedState : BRCPersistedState {
    long long _latestGCStartTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)timeSinceLatestGCStartTime;
- (id)initWithLatestGCStartTime:(long long)a0;
- (id)description;
- (id)init;

@end
