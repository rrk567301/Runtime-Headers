@interface IRCandidateSelector : NSObject

@property (nonatomic) char candidateSelectorReasonRecentlyUsed;
@property (nonatomic) char candidateSelectorReasonMostlyUsedSimilarApp;
@property (nonatomic) char candidateSelectorReasonProximityWithHistoryOrSameICloud;
@property (nonatomic) char candidateSelectorReasonProximity;
@property (nonatomic) char candidateSelectorReasonMostlyUsedAnyApp;
@property (nonatomic) char candidateSelectorReasonBrokeredMainDeviceFirstUse;
@property (nonatomic) char candidateSelectorReasonSingle;

+ (char)_isPickerChoiceOverrideActiveAtDate:(id)a0 withSystemState:(id)a1;

- (id)_candidatesToSelectFrom:(id)a0;
- (id)_nearestRangeCandidateFromCandidates:(id)a0;
- (id)_selectBasedOnContinuityFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostRecentMainBrokeredDeviceFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedAnyAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedSimilarAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnNearestRangeFromCandidates:(id)a0;
- (id)_selectBasedOnNearestRangeWithHistoryOrSameICloudFromCandidates:(id)a0 withSystemState:(id)a1;
- (id)_selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3 andRule:(id)a4;
- (id)adjustClassificationForCandidateBasedOnNegativeInputs:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andMiloPrediction:(id)a3 andDate:(id)a4;
- (id)getSelectorReasons;
- (id)selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;

@end
