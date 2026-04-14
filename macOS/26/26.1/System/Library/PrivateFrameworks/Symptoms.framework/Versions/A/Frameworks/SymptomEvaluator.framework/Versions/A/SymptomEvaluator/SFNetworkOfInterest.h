@class NSMutableArray;

@interface SFNetworkOfInterest : NWNetworkOfInterest {
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setLinkQuality:(long long)a0;
- (void)setPredictions:(id)a0;
- (long long)linkQuality;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)discretionaryTrafficInvited;
- (BOOL)isTrafficEligible;
- (long long)powerCostUL;
- (void)setConsiderAlternate:(long long)a0;
- (id)considerAlternateUpdate;
- (long long)powerCostDL;
- (id)initWithSpec:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (void)setWillGetDiscretionaryTrafficInvites:(BOOL)a0;
- (void)setInterfaceClass:(long long)a0;
- (long long)interfaceClass;
- (void)setConsiderAlternateUpdate:(id)a0;
- (id)predictions;
- (void)setPredictionsGeneratedAt:(id)a0;
- (void).cxx_destruct;
- (void)setPowerCostDL:(long long)a0;
- (void)setIsTrafficEligible:(BOOL)a0;
- (BOOL)willGetDiscretionaryTrafficInvites;
- (id)predictionsGeneratedAt;
- (void)setPowerCostUL:(long long)a0;
- (long long)considerAlternate;
- (void)setDiscretionaryTrafficInvited:(BOOL)a0;
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
