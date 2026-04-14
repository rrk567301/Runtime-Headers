@interface BRCClientRanksPersistedState : BRCPersistedState {
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
    unsigned long long _telemetryMinRowID;
    long long _telemetryToken;
    BOOL _notifRankChanged;
}

@property (readonly, nonatomic) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;
@property (nonatomic) unsigned long long telemetryMinRowID;
@property (nonatomic) long long telemetryToken;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocatePackageItemRank;
- (void)encodeWithCoder:(id)a0;
- (BOOL)getAndClearIsNotifRankChanged;
- (id)init;
- (unsigned long long)allocateNotifRank;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
