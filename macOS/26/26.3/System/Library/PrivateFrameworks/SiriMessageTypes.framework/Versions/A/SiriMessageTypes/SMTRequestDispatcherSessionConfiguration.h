@class NSString;

@interface SMTRequestDispatcherSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *assistantId;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL understandingOnDevice;
@property (readonly, nonatomic) BOOL isSystemAssistantExperienceEnabled;
@property (readonly, nonatomic) BOOL isFullPlannerEnabled;
@property (readonly, nonatomic) BOOL isPQAEnabled;
@property (readonly, nonatomic) BOOL deferIntelligenceFlowSessionCreation;
@property (readonly, copy, nonatomic) NSString *sharedUserId;
@property (readonly, nonatomic) struct { unsigned int val[8]; } clientAuditToken;

- (id)initWithBuilder:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
