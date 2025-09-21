@class NSArray, ATXAction, NSString, NSDate, NSMutableArray;

@interface ATXPartialIntentHandlingContext : NSObject <NSSecureCoding> {
    NSMutableArray *_feedbackResults;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *feedbackResults;
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction;
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate;
@property (readonly, nonatomic) NSString *currentApp;
@property (readonly, nonatomic) NSDate *currentAppSessionStartDate;
@property (readonly, nonatomic) ATXAction *shortcutsRuntimeDonatedAction;
@property (readonly, nonatomic) NSDate *shortcutsRuntimeDonationDate;
@property (readonly, nonatomic) ATXAction *matchingAppSessionDonatedAction;
@property (readonly, nonatomic) NSDate *matchingAppSessionDonationDate;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_resetInternalState;
- (char)_isCompleteEngagementForATXAction:(id)a0 withMatchingDonatedAction:(id)a1;
- (char)_isPartialEngagementForATXAction:(id)a0 withMatchingDonatedAction:(id)a1;
- (id)_partiallyExecutedSuggestionFromFeedbackResult:(id)a0;
- (void)_tryUpdateMatchingAppSessionDonatedAction:(id)a0 eventDate:(id)a1;
- (void)_tryUpdatePartialIntentSessionState;
- (void)_tryUpdateShortcutsRuntimeDonatedAction:(id)a0 eventDate:(id)a1;
- (id)atxActionFromIntentEvent:(id)a0;
- (id)handleAppLaunchAndReturnCompletedResults:(id)a0;
- (id)handleNewFeedbackResultAndReturnCompletedResults:(id)a0;
- (id)handleNewIntentEventAndReturnCompletedResults:(id)a0;
- (id)initWithFeedbackResults:(id)a0 partiallyExecutedAction:(id)a1 partiallyExecutedActionStartDate:(id)a2 currentApp:(id)a3 currentAppSessionStartDate:(id)a4 shortcutsRuntimeDonatedAction:(id)a5 shortcutsRuntimeDonationDate:(id)a6 matchingAppSessionDonatedAction:(id)a7 matchingAppSessionDonationDate:(id)a8;
- (char)isEqualToATXPartialIntentHandlingContext:(id)a0;

@end
