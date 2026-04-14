@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (id)bundleIdForAction:(id)a0;
- (id)actionPredictionBlacklist;
- (void)invalidate;
- (id)digitalHealthBlacklist;
- (BOOL)isActionBlacklisted:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)firstUpdateDateForActions:(id)a0;
- (void)dealloc;
- (id)produceActions;
- (void)coalescedProduceActions;
- (void).cxx_destruct;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (id)init;

@end
