@class NSMutableArray;

@interface SFNetworkOfInterest : NWNetworkOfInterest {
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}

+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (long long)linkQuality;
- (void)setLinkQuality:(long long)a0;
- (void)setPredictions:(id)a0;
- (id)predictions;
- (char)discretionaryTrafficInvited;
- (long long)interfaceClass;
- (long long)powerCostDL;
- (long long)powerCostUL;
- (void)setPowerCostUL:(long long)a0;
- (void)setDiscretionaryTrafficInvited:(char)a0;
- (void)setPowerCostDL:(long long)a0;
- (long long)considerAlternate;
- (id)considerAlternateUpdate;
- (id)initWithSpec:(unsigned char)a0 isAny:(char)a1 isBuiltin:(char)a2 scopedToLOI:(long long)a3 flags:(long long)a4 hasCustomSignature:(id)a5;
- (char)isTrafficEligible;
- (id)predictionsGeneratedAt;
- (void)setConsiderAlternate:(long long)a0;
- (void)setConsiderAlternateUpdate:(id)a0;
- (void)setInterfaceClass:(long long)a0;
- (void)setIsTrafficEligible:(char)a0;
- (void)setPredictionsGeneratedAt:(id)a0;
- (void)setWillGetDiscretionaryTrafficInvites:(char)a0;
- (char)willGetDiscretionaryTrafficInvites;
- (char)_newDistroSlot;
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
