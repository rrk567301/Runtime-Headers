@class IDSPushToken, NSString, NSDictionary, IDSURI, NSData, NSNumber, NSArray;

@interface IDSIncomingNiceMessage : NSObject

@property (retain, nonatomic) NSDictionary *messageDictionary;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *cachedDescription;
@property (readonly, nonatomic) NSDictionary *rawMessage;
@property (readonly, nonatomic) NSString *pushUUID;
@property (readonly, nonatomic) NSNumber *expirationDate;
@property (readonly, nonatomic) NSNumber *command;
@property (readonly, nonatomic) NSNumber *commandContext;
@property (readonly, nonatomic) IDSURI *toURI;
@property (readonly, nonatomic) NSString *reportID;
@property (readonly, nonatomic) NSData *groupIDData;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSNumber *wantsAppAck;
@property (readonly, nonatomic) NSNumber *expectsPeerResponse;
@property (readonly, nonatomic) NSNumber *certifiedDeliveryVersion;
@property (readonly, nonatomic) NSData *updateHash;
@property (readonly, nonatomic) NSData *encryptedPayload;
@property (readonly, nonatomic) NSData *certifiedDeliveryRTS;
@property (readonly, nonatomic) NSNumber *storageContext;
@property (readonly, nonatomic) NSNumber *serverTimestamp;
@property (readonly, nonatomic) NSData *rawBulkedData;
@property (readonly, nonatomic) NSData *rawUnencryptedPayload;
@property (readonly, nonatomic) NSNumber *isBulkedPayload;
@property (readonly, nonatomic) NSNumber *originalCommand;
@property (readonly, nonatomic) IDSPushToken *senderPushToken;
@property (readonly, nonatomic) NSNumber *originalTimestamp;
@property (readonly, nonatomic) BOOL isTrustedSender;
@property (readonly, nonatomic) unsigned long long ifUnknownAction;
@property (readonly, nonatomic) NSData *payloadMetadataData;
@property (readonly, nonatomic) NSString *encryptionTypeStr;
@property (readonly, nonatomic) NSNumber *wantsCheckpointing;
@property (readonly, nonatomic) NSNumber *failureReason;
@property (readonly, nonatomic) NSString *failureMessageID;
@property (readonly, nonatomic) NSString *failureReasonMessage;
@property (readonly, nonatomic) NSNumber *storageFlags;
@property (readonly, nonatomic) NSString *storageFetchUUID;
@property (readonly, nonatomic) NSNumber *retryCount;
@property (readonly, nonatomic) IDSURI *fromURI;
@property (readonly, nonatomic) NSArray *messageList;
@property (readonly, nonatomic) NSString *senderShortHandle;
@property (readonly, nonatomic) NSString *receiverShortHandle;
@property (readonly, nonatomic) NSNumber *messageChunkNumber;
@property (readonly, nonatomic) NSNumber *totalChunkCount;
@property (readonly, nonatomic) NSString *originalUUID;
@property (readonly, nonatomic) NSNumber *pendingMessageCount;
@property (readonly, nonatomic) NSNumber *pendingMessagePerSenderCount;
@property (readonly, nonatomic) NSNumber *desiredProtocol;
@property (readonly, nonatomic) NSData *serverStorageSSM;
@property (readonly, nonatomic) BOOL wantsDeliveryStatus;
@property (readonly, nonatomic) NSNumber *snapTrustedUser;
@property (readonly, nonatomic) NSDictionary *deliveryStatusContext;
@property (readonly, nonatomic) NSNumber *batchNumber;
@property (readonly, nonatomic) NSNumber *totalBatchCount;
@property (readonly, nonatomic) NSString *samplingUUID;
@property (readonly, nonatomic) NSNumber *deviceID;

- (id)copy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageDictionary:(id)a0 topic:(id)a1;

@end
