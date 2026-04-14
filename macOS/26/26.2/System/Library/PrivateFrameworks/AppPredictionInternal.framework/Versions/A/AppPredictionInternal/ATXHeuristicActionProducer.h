@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (void)invalidate;
- (id)actionPredictionBlacklist;
- (void)coalescedProduceActions;
- (id)digitalHealthBlacklist;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (id)bundleIdForAction:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (void).cxx_destruct;
- (id)_criteriaForJobOnDate:(id)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (id)produceActions;
- (id)init;
- (void)dealloc;
- (id)firstUpdateDateForActions:(id)a0;

@end
