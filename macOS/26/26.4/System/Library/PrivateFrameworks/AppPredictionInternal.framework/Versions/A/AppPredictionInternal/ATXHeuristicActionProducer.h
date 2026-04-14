@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (id)firstUpdateDateForActions:(id)a0;
- (void)coalescedProduceActions;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)produceActions;
- (id)actionPredictionBlacklist;
- (id)digitalHealthBlacklist;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (id)bundleIdForAction:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)dealloc;

@end
