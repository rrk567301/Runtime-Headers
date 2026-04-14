@class NSString, NSArray;

@interface _PSMessagesZkwFeedback : NSObject

@property (nonatomic) BOOL dryRun;
@property (readonly, copy, nonatomic) NSString *chatGuidEngaged;
@property (readonly, copy, nonatomic) NSArray *suggestions;

- (void).cxx_destruct;
- (id)getTrialID;
- (id)feedbackPayload;
- (id)initWithChatGuidEngagaged:(id)a0 suggestions:(id)a1;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)a0;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)a0;
- (id)reasonForSuggestionIndex:(unsigned long long)a0;

@end
