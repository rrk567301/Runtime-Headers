@interface ATXHeuristicActionProducer : NSObject {
    id _expireNotificationHandle;
}

+ (id)sharedInstance;
+ (unsigned long long)actionExperienceForScoredHeuristicAction:(id)a0;
+ (double)generateScoreForHeuristic:(id)a0;

- (void)invalidate;
- (id)bundleIdForAction:(id)a0;
- (id)init;
- (BOOL)isActionBlacklisted:(id)a0;
- (id)_criteriaForJobOnDate:(id)a0;
- (id)digitalHealthBlacklist;
- (BOOL)userAlreadyEngagedWithAction:(id)a0;
- (void).cxx_destruct;
- (id)firstUpdateDateForActions:(id)a0;
- (void)dealloc;
- (void)scheduleNextHeuristicRefreshGivenActions:(id)a0;
- (void)invalidateOnGlobalQueueWithDelay:(double)a0;
- (void)coalescedProduceActions;
- (id)actionPredictionBlacklist;
- (id)produceActions;
- (void)setUpdateJobForCriteria:(id)a0;

@end
