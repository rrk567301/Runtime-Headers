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
+ (id)buildSecureCandidateFrom:(id)a0 withSecureCandidateRenderer:(id)a1 input:(id)a2;
+ (id)proactiveTriggerForTextContentType:(id)a0;
+ (id)proactiveTriggerForTextContentType:(id)a0 withContextBeforeInput:(id)a1 autofillMode:(unsigned long long)a2;
+ (id)buildSecureCandidateForTestFrom:(id)a0 withSecureCandidateRenderer:(id)a1 input:(id)a2;
+ (void)setSharedTIProactiveQuickTypeManager:(id)a0;
+ (id)singletonInstance;

- (id)_makeQueue;
- (void)reset;
- (id)inputContextPredictionManager;
- (void)dealloc;
- (BOOL)isEnabled;
- (BOOL)isAutoPopupEnabled;
- (id)searchForMeCardEmailAddresses;
- (void)loggingProactiveEngagementMetric:(unsigned long long)a0 withLocale:(id)a1 fieldType:(id)a2;
- (void)suggestionAccepted:(id)a0 fieldType:(id)a1;
- (BOOL)usePQT2Flow;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
- (void)addToTypologyTrace:(id /* block */)a0 withTriggerSource:(id)a1 withTriggerType:(id)a2 withTriggerSubType:(id)a3 withPredictionResults:(id)a4 withFirstTrigger:(id)a5;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)init;
- (void)keyboardActivityDidTransition:(id)a0;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withAvailableApps:(id)a10 logBlock:(id /* block */)a11;
- (id)getLastSuggestionTime;
- (id)initWithICManager:(id)a0;
- (BOOL)isAutoCompleteEnabled;
- (id)searchForMeCardRegions;
- (void)userActionWithNoNewTriggers:(id)a0 fieldType:(id)a1;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void)suggestionNotAccepted:(id)a0;
- (void)generateAndRenderProactiveSuggestionsForInput:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withIsResponseDenyListed:(BOOL)a10 withShouldDisableAutoCaps:(BOOL)a11 withAvailableApps:(id)a12 logBlock:(id /* block */)a13 async:(BOOL)a14 completion:(id /* block */)a15;
- (void).cxx_destruct;
- (id)renderItems:(id)a0 withAdditionalPredictions:(id)a1 withSecureCandidateRenderer:(id)a2 withRenderTraits:(id)a3 withInput:(id)a4;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)a0 userInput:(id)a1;

@end
