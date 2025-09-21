@class NSString, NSArray, IMDAccount, IMDServiceSession, NSNumber, IMDChat;

@interface IMReadReceiptPipelineParameter : NSObject <IMReadReceiptProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *fromPushID;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (nonatomic) char isFromDefaultPairedDevice;
@property (nonatomic) char isFromStorage;
@property (nonatomic) char isLastFromStorage;
@property (nonatomic) char isFromMe;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
