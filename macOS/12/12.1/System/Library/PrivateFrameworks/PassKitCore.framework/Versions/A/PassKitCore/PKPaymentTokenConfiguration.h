@class NSArray, NSURL;

@interface PKPaymentTokenConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configurationType;
@property (copy, nonatomic) NSArray *multiTokenContexts;
@property (nonatomic) BOOL requestMerchantToken;
@property (retain, nonatomic) NSURL *merchantTokenManagementURL;
@property (retain, nonatomic) NSURL *merchantTokenNotificationURL;

+ (long long)version;
+ (id)configurationWithProtobuf:(id)a0;
+ (id)multiTokenConfigurationWithContexts:(id)a0;
+ (id)merchantTokenConfigurationWithManagementURL:(id)a0 notificationURL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)protobuf;
- (BOOL)isEqualToPaymentTokenConfiguration:(id)a0;

@end
