@class NSArray, NSString, NSDictionary, NSData, NSDate, NSAttributedString;

@interface IMDIndexableMessageRecord : NSObject

@property (readonly, nonatomic) long long rowID;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) NSDate *timeRead;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *plainBody;
@property (readonly, nonatomic) NSAttributedString *attributedBody;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL hasAttachments;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) NSString *expressiveSendStyleID;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) NSString *syndicationRanges;
@property (readonly, nonatomic) NSString *destinationCallerID;
@property (readonly, nonatomic) IMDIndexableMessageRecord *threadOriginator;
@property (readonly, nonatomic) NSString *threadOriginatorFormattedGUID;
@property (readonly, nonatomic) NSString *biaReferenceID;
@property (readonly, nonatomic) NSString *associatedEmoji;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) NSString *uncanonicalizedHandle;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic, getter=isKnownSender) BOOL knownSender;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)formattedGUIDWithPart:(id)a0;
- (id)initWithMessageRecord:(id)a0;
- (id)messageDescriptor;

@end
