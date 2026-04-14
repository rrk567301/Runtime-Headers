@class NSString, NSDictionary;

@interface SiriSharedUISuggestionExecutionWrapper : NSObject

@property (readonly, nonatomic) NSString *invocationText;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSDictionary *encodedToolInvocationData;
@property (readonly, nonatomic) long long suggestionRequestType;

- (void).cxx_destruct;
- (id)initWithInvocationText:(id)a0 displayText:(id)a1 encodedToolInvocationData:(id)a2 suggestionRequestType:(long long)a3;

@end
