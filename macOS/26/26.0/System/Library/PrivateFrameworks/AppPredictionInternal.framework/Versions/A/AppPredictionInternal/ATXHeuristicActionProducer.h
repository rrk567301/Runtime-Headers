@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (id)digitalHealthBlacklist;
- (id)actionPredictionBlacklist;
- (id)bundleIdForAction:(id)a0;
- (void)dealloc;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (void)invalidate;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (void)coalescedProduceActions;
- (id)produceActions;
- (id)init;
- (id)firstUpdateDateForActions:(id)a0;
- (void)setUpdateJobForCriteria:(id)a0;
- (id)_criteriaForJobOnDate:(id)a0;
- (BOOL)isActionBlacklisted:(id)a0;
- (void).cxx_destruct;

@end
