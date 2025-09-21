@class NSString;

@interface SMTRequestDispatcherSessionConfigurationMutating : NSObject

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) char understandingOnDevice;
@property (nonatomic) char isSystemAssistantExperienceEnabled;
@property (copy, nonatomic) NSString *sharedUserId;
@property (nonatomic) struct { unsigned int val[8]; } clientAuditToken;

- (void).cxx_destruct;

@end
