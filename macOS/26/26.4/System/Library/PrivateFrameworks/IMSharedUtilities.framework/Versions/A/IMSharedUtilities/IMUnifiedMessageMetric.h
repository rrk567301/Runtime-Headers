@class NSString, NSArray, NSNumber;

@interface IMUnifiedMessageMetric : NSObject {
    void /* function */ messageGUID;
    void /* function */ previewGenerationFailureReason;
    void /* function */ transferTypes;
    void /* function */ messageErrorDescription;
    void /* function */ chatBotParsingFailureReason;
    void /* unknown type, empty encoding */ assetVersion;
    void /* unknown type, empty encoding */ bytesSavedWithCompression;
    void /* unknown type, empty encoding */ codecID;
    void /* unknown type, empty encoding */ timeSinceSendViaSatellite;
}

@property (class, nonatomic, readonly) long long bestGuessTransportType;
@property (class, nonatomic, readonly) BOOL mergedMetricSubmissionsEnabled;
@property (class, nonatomic, readonly) BOOL legacyMetricSubmissionsDisabled;

@property (nonatomic, readonly) BOOL isEmergencyNumber;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic) long long direction;
@property (nonatomic) long long transportType;
@property (nonatomic) long long serviceType;
@property (nonatomic) BOOL isReflection;
@property (nonatomic) long long downgradedFromServiceType;
@property (nonatomic) BOOL deferRCSMetricSubmission;
@property (nonatomic) long long chatType;
@property (nonatomic) BOOL isHybridGroup;
@property (nonatomic) BOOL isChatBot;
@property (nonatomic) BOOL isEmergencySOS;
@property (nonatomic) BOOL isHybridMessage;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) unsigned long long senderComposition;
@property (nonatomic) unsigned long long participantComposition;
@property (nonatomic) long long sendingSIMStatus;
@property (nonatomic, copy) NSString *previewGenerationFailureReason;
@property (nonatomic) long long previewGenerationStatus;
@property (nonatomic) double timeSinceSend;
@property (nonatomic) double messageLatency;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long totalFileTransferSize;
@property (nonatomic, copy) NSArray *transferTypes;
@property (nonatomic) long long messageType;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) long long messageStatus;
@property (nonatomic) unsigned int messageError;
@property (nonatomic, copy) NSString *messageErrorDescription;
@property (nonatomic) double timeSinceLastMessage;
@property (nonatomic) unsigned long long lowQualityStatus;
@property (nonatomic) long long ctErrorDomain;
@property (nonatomic) long long ctErrorCode;
@property (nonatomic) long long chatBotParsingStatus;
@property (nonatomic, copy) NSString *chatBotParsingFailureReason;
@property (nonatomic) long long keyExchangeStatus;
@property (nonatomic) BOOL recipientIsPrimaryHandle;
@property (nonatomic) BOOL recipientIsQualifiedHandle;
@property (nonatomic) unsigned int satelliteMessageError;
@property (nonatomic) BOOL strugglingMessageIndicationSent;
@property (nonatomic, retain) NSNumber *assetVersion;
@property (nonatomic, retain) NSNumber *bytesSavedWithCompression;
@property (nonatomic, retain) NSNumber *codecID;
@property (nonatomic, retain) NSNumber *timeSinceSendViaSatellite;

+ (long long)serviceTypeForServiceName:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)submit;
- (void)populateMetricsWithLocalHandle:(id)a0;
- (id)initWithIncomingMessage:(id)a0 transportType:(long long)a1 serviceType:(long long)a2 recipients:(id)a3 receivingHandle:(id)a4;
- (id)initWithOutgoingMessage:(id)a0 transportType:(long long)a1 serviceType:(long long)a2 recipients:(id)a3 sendingHandle:(id)a4;
- (void)populateIncomingMetricWithSender:(id)a0;
- (void)populateMetricsWithMessageStatus:(id)a0;
- (void)populateMetricsWithRecipients:(id)a0;

@end
