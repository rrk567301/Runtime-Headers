@class TIProactiveTrigger, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue, _ICPredictionManaging;

@interface TIProactiveQuickTypeManager : NSObject <TIProactiveQuickTypeManaging, TIKeyboardActivityObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_ICPredictionManaging> _inputContextPredictionManager;
    TIProactiveTrigger *_lastTriggerForSuggestion;
    NSDate *_lastSuggestionTime;
    NSString *_maxLengthProactiveCandidate;
    unsigned long long _textBeforeLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)singletonInstance;
+ (id)proactiveTriggerForTextContentType:(id)a0;
+ (id)buildSecureCandidateForTestFrom:(id)a0 withSecureCandidateRenderer:(id)a1 input:(id)a2;
+ (id)proactiveTriggerForTextContentType:(id)a0 withContextBeforeInput:(id)a1 autofillMode:(unsigned long long)a2;
+ (id)buildSecureCandidateFrom:(id)a0 withSecureCandidateRenderer:(id)a1 input:(id)a2;
+ (void)setSharedTIProactiveQuickTypeManager:(id)a0;

- (BOOL)isEnabled;
- (void)addToTypologyTrace:(id /* block */)a0 withTriggerSource:(id)a1 withTriggerType:(id)a2 withTriggerSubType:(id)a3 withPredictionResults:(id)a4 withFirstTrigger:(id)a5;
- (void)keyboardActivityDidTransition:(id)a0;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withAvailableApps:(id)a10 logBlock:(id /* block */)a11;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)a0 userInput:(id)a1;
- (BOOL)isAutoCompleteEnabled;
- (id)inputContextPredictionManager;
- (id)renderItems:(id)a0 withAdditionalPredictions:(id)a1 withSecureCandidateRenderer:(id)a2 withRenderTraits:(id)a3 withInput:(id)a4;
- (id)init;
- (BOOL)isAutoPopupEnabled;
- (id)searchForMeCardEmailAddresses;
- (void)loggingProactiveEngagementMetric:(unsigned long long)a0 withLocale:(id)a1 fieldType:(id)a2;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3;
- (id)getLastSuggestionTime;
- (void)generateAndRenderProactiveSuggestionsForInput:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withIsResponseDenyListed:(BOOL)a10 withShouldDisableAutoCaps:(BOOL)a11 withAvailableApps:(id)a12 logBlock:(id /* block */)a13 async:(BOOL)a14 completion:(id /* block */)a15;
- (void)suggestionNotAccepted:(id)a0;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
- (void)userActionWithNoNewTriggers:(id)a0 fieldType:(id)a1;
- (id)initWithICManager:(id)a0;
- (void).cxx_destruct;
- (void)suggestionAccepted:(id)a0 fieldType:(id)a1;
- (void)dealloc;
- (id)_makeQueue;
- (void)reset;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (id)searchForMeCardRegions;
- (BOOL)usePQT2Flow;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
