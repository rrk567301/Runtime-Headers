@class IMDServiceSession, NSString, NSDictionary, NSArray, IMDAccount, NSNumber, IMDChat;

@interface IMReadReceiptPipelineParameter : NSObject <IMReadReceiptProcessingParameter, IMFindAccountProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *fromPushID;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (nonatomic) BOOL isFromDefaultPairedDevice;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (readonly, nonatomic) NSDictionary *batchContext;
@property (nonatomic) BOOL isFromMe;
@property (retain, nonatomic) NSArray *participantIdentifiers;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSNumber *originalMessageTimestamp;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
