@class NSString, _PSSuggester;

@interface CNAutocompletePeopleSuggesterFeedback : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) _PSSuggester *psSuggester;

+ (id)sharedInstance;
+ (id)bundleIdentifier;
+ (void)didReceiveSuggestions:(id)a0;
+ (void)userSelectedSuggestion:(id)a0;
+ (void)userEnteredNewSession;
+ (void)userEnteredExistingSession;
+ (void)userNavigatedAwayFromSession;
+ (void)userTerminatedSession;
+ (void)userEnteredContact:(id)a0;
+ (void)userSelectedFromContactPicker:(id)a0;
+ (void)userRemovedContact:(id)a0;
+ (void)provideFeedback:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
