@class NSMutableArray;

@interface SFNetworkOfInterest : NWNetworkOfInterest {
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)linkQuality;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (long long)considerAlternate;
- (id)valueForUndefinedKey:(id)a0;
- (long long)interfaceClass;
- (id)predictions;
- (void)setLinkQuality:(long long)a0;
- (BOOL)isTrafficEligible;
- (void)setConsiderAlternate:(long long)a0;
- (void)setPowerCostUL:(long long)a0;
- (void)setDiscretionaryTrafficInvited:(BOOL)a0;
- (void).cxx_destruct;
- (void)setIsTrafficEligible:(BOOL)a0;
- (id)predictionsGeneratedAt;
- (void)setInterfaceClass:(long long)a0;
- (long long)powerCostUL;
- (void)setWillGetDiscretionaryTrafficInvites:(BOOL)a0;
- (BOOL)discretionaryTrafficInvited;
- (id)initWithSpec:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (BOOL)willGetDiscretionaryTrafficInvites;
- (void)setPredictions:(id)a0;
- (void)setPowerCostDL:(long long)a0;
- (long long)powerCostDL;
- (id)considerAlternateUpdate;
- (void)setPredictionsGeneratedAt:(id)a0;
- (void)setConsiderAlternateUpdate:(id)a0;
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
