@class NSMutableArray;

@interface SFNetworkOfInterest : NWNetworkOfInterest {
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)linkQuality;
- (void)setLinkQuality:(long long)a0;
- (void)setConsiderAlternate:(long long)a0;
- (void)setPredictionsGeneratedAt:(id)a0;
- (BOOL)willGetDiscretionaryTrafficInvites;
- (void)setPredictions:(id)a0;
- (id)predictions;
- (void)setIsTrafficEligible:(BOOL)a0;
- (void)setPowerCostUL:(long long)a0;
- (long long)interfaceClass;
- (BOOL)isTrafficEligible;
- (BOOL)discretionaryTrafficInvited;
- (long long)powerCostDL;
- (id)initWithSpec:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (id)valueForUndefinedKey:(id)a0;
- (id)considerAlternateUpdate;
- (void)setConsiderAlternateUpdate:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setDiscretionaryTrafficInvited:(BOOL)a0;
- (void)setWillGetDiscretionaryTrafficInvites:(BOOL)a0;
- (void)setPowerCostDL:(long long)a0;
- (long long)considerAlternate;
- (long long)powerCostUL;
- (void)setInterfaceClass:(long long)a0;
- (void).cxx_destruct;
- (id)predictionsGeneratedAt;
- (BOOL)_newDistroSlot;
- (void)anchorPowerCostToLinkQuality;
- (id)dayOfWeekGrouping;
- (id)hasForegroundActivity;
- (id)instantQuality;
- (id)interfaceTimeline;
- (id)invitesHourlyDistribution;
- (id)predictionsError;
- (void)setHasForegroundActivity:(id)a0;
- (void)setInstantQuality:(id)a0;
- (id)trainingProgress;

@end
