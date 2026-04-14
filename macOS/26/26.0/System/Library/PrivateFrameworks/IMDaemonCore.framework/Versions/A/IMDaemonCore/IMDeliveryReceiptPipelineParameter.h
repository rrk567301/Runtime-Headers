@class NSString, NSArray, NSSet, IMDChat, NSDictionary, IMDAccount, NSNumber, IMDServiceSession;

@interface IMDeliveryReceiptPipelineParameter : NSObject <IMFindAccountProcessingParameter, IMDeliveryReceiptProcessingParameter, IMMessageFromStorageParameter, IMSenderCapabilityParameter, PostDeliveryReceiptProcessingParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (readonly, nonatomic) NSDictionary *batchContext;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (retain, nonatomic) NSSet *senderRegistrationProperties;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
