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

- (BOOL)getAndClearIsNotifRankChanged;
- (unsigned long long)allocateItemRowID;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)allocatePackageItemRank;
- (id)initWithCoder:(id)a0;
- (unsigned long long)allocateNotifRank;
- (id)init;

@end
