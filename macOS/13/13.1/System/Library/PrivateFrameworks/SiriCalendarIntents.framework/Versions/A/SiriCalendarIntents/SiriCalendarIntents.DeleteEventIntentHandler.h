@class INDeleteEventIntent, INStringResolutionResult, INBooleanResolutionResult, INDeleteEventIntentResponse;

@interface SiriCalendarIntents.DeleteEventIntentHandler : SiriCalendarIntents.BaseIntentHandler <INDeleteEventIntentHandling>

- (void)handleDeleteEvent:(INDeleteEventIntent *)a0 completion:(void (^)(INDeleteEventIntentResponse *))a1;
- (void)confirmDeleteEvent:(INDeleteEventIntent *)a0 completion:(void (^)(INDeleteEventIntentResponse *))a1;
- (void)resolveTargetEventIdentifierForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INStringResolutionResult *))a1;
- (void)resolveDeleteAllOccurrencesForDeleteEvent:(INDeleteEventIntent *)a0 withCompletion:(void (^)(INBooleanResolutionResult *))a1;

@end
