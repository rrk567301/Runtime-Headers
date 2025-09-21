@interface ATXActionPredictionsProcessor : NSObject

+ (id)_contactIdentifiersReferencedByAction:(id)a0;
+ (char)actionPredictionsContainsAlarmAction:(id)a0;
+ (void)addEligibleCreateAlarmIndexesToAcceptedIndexes:(id)a0 currentDate:(id)a1 enabledAlarms:(id)a2 idx:(unsigned long long)a3 params:(id)a4 parameterCombinations:(id)a5;
+ (void)addEligibleToggleAlarmIndexesToAcceptedIndexes:(id)a0 currentDate:(id)a1 disabledAlarms:(id)a2 enabledAlarms:(id)a3 idx:(unsigned long long)a4 params:(id)a5 parameterCombinations:(id)a6;
+ (id)hourAndMinuteComponentsFromDateComponents:(id)a0;
+ (id)indicesOfNonDuplicateScoredActions:(id)a0;
+ (char)isBlockedEmailAddressContainedInAddresses:(id)a0;
+ (char)isBlockedPhoneNumberContainedInNumbers:(id)a0;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)a0;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)a0 enabledAlarms:(id)a1 disabledAlarms:(id)a2 currentDate:(id)a3;
+ (id)removeDuplicateActionPredictions:(id)a0;
+ (id)removeDuplicateTVActionPredictions:(id)a0;
+ (id)removeMissingOrBlockedRecipientPredictions:(id)a0;
+ (char)scoredActionsAreDuplicatesWithScoredAction1:(id)a0 scoredAction2:(id)a1;
+ (id)userAlarms;
+ (char)validTimeToSuggestAlarmForAlarmComponents:(id)a0 currentDate:(id)a1;

@end
