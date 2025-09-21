@class NSDictionary, ICMusicSubscriptionStatus, NSDate;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isFinalResponse) char finalResponse;
@property (nonatomic) char needsReload;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) char expired;

+ (char)isValidSubscriptionStatusPropertyListRepresentation:(id)a0 error:(id *)a1;
+ (char)isValidSubscriptionStatusResponseDictionary:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;

@end
