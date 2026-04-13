@class NSString, NSDictionary, NSDate, AMSXDDevice;
@protocol NSSecureCoding, NSObject;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *objectClassName;
@property BOOL isReply;
@property (retain) NSString *messageID;
@property (retain) NSDate *receiptDate;
@property (readonly) NSDictionary *JSONDictionary;
@property (retain) AMSXDDevice *destination;
@property double expirationInterval;
@property (retain) NSString *identifier;
@property (readonly, getter=isExpired) BOOL expired;
@property (retain) NSString *logKey;
@property (retain) id<NSObject, NSSecureCoding> object;
@property (retain) AMSXDDevice *origin;
@property long long purpose;

+ (id)_allowedClassesForDecoding;
+ (id)_allowedClassNamesForDecoding;
+ (id)messageFromProtoMessage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 destination:(id)a1 purpose:(long long)a2 object:(id)a3;
- (id)createProtoMessage;

@end
