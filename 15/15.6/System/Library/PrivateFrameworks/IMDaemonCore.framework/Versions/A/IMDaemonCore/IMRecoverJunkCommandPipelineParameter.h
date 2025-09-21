@class NSString, NSArray, IMDAccount, IMDServiceSession, NSNumber, IMDChat;

@interface IMRecoverJunkCommandPipelineParameter : NSObject <IMRecoverJunkCommandProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) char isFromMe;
@property (readonly, nonatomic) char isFromStorage;
@property (readonly, nonatomic) char isLastFromStorage;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
