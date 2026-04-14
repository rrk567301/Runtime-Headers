@class NSMutableArray;

@interface SFNetworkOfInterest : NWNetworkOfInterest {
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)linkQuality;
- (id)valueForUndefinedKey:(id)a0;
- (long long)powerCostDL;
- (long long)considerAlternate;
- (void)setPowerCostUL:(long long)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (long long)interfaceClass;
- (void)setDiscretionaryTrafficInvited:(BOOL)a0;
- (void)setConsiderAlternateUpdate:(id)a0;
- (long long)powerCostUL;
- (id)initWithSpec:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (void)setIsTrafficEligible:(BOOL)a0;
- (void)setPowerCostDL:(long long)a0;
- (void)setLinkQuality:(long long)a0;
- (BOOL)discretionaryTrafficInvited;
- (void)setPredictions:(id)a0;
- (void)setWillGetDiscretionaryTrafficInvites:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPredictionsGeneratedAt:(id)a0;
- (id)predictions;
- (void)setConsiderAlternate:(long long)a0;
- (void)setInterfaceClass:(long long)a0;
- (BOOL)isTrafficEligible;
- (BOOL)willGetDiscretionaryTrafficInvites;
- (id)considerAlternateUpdate;
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
