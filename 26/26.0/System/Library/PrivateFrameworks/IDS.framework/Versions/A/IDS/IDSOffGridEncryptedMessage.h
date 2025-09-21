@class NSString, IDSOffGridEncryptionProperties, NSData, NSDate, NSNumber, IDSURI;

@interface IDSOffGridEncryptedMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *message;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IDSOffGridEncryptionProperties *encryptionProperties;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *senderShortHandle;
@property (retain, nonatomic) NSString *recipientShortHandle;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSNumber *pendingTotalCount;
@property (retain, nonatomic) NSNumber *pendingCount;
@property (retain, nonatomic) NSNumber *preferredService;
@property (retain, nonatomic) IDSURI *senderURI;
@property (retain, nonatomic) IDSURI *recipientURI;
@property (readonly, nonatomic) long long preferredServiceType;
@property (readonly, nonatomic) long long maxPayloadSizeRemaining;

+ (long long)maxPayloadSize;
+ (id)_daemonListener;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)payload;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)splitMessageIntoMessagesThatFit;
- (id)initWithDictionaryMessage:(id)a0;
- (id)initWithMessage:(id)a0 senderURI:(id)a1 recipientURI:(id)a2 encryptionProperties:(id)a3;
- (id)initWithPayload:(id)a0 senderURI:(id)a1 recipientURI:(id)a2;
- (id)initWithSegments:(id)a0;
- (long long)serviceTypeFromNumber:(id)a0;

@end
