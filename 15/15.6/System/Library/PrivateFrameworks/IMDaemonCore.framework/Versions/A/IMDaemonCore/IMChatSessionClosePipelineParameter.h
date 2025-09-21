@class NSString, NSArray, IMDAccount, IMDServiceSession, NSNumber, IMDChat;

@interface IMChatSessionClosePipelineParameter : NSObject <IMFindAccountProcessingParameter, IMChatSessionCloseProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) char isFromStorage;
@property (nonatomic) char isLastFromStorage;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (nonatomic) char isEmergencySOS;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) char deleteConversation;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
