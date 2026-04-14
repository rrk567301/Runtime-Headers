@class NSString, NSData;

@interface DAOutgoingMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *payloadData;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *featureID;
@property (copy, nonatomic) NSString *queueOneIdentifier;
@property (copy, nonatomic) NSString *cbRestorationID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *payloadFilePath;
@property (nonatomic) long long transportPriority;
@property (readonly, nonatomic) long long payloadSize;
@property (nonatomic) long long payloadVersion;
@property (nonatomic) long long retryCount;
@property (nonatomic) double originatedAt;
@property (nonatomic) double expiresAt;
@property (nonatomic) double lastAttemptedAt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageID:(id)a0 payloadData:(id)a1;
- (id)initWithMessageID:(id)a0 payloadFilePath:(id)a1;

@end
