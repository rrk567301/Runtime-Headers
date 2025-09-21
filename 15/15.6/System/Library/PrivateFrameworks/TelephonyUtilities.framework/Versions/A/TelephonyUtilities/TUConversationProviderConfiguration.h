@class NSString, NSSet;

@interface TUConversationProviderConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) char supportsLinks;
@property (nonatomic) char supportsSharePlay;
@property (nonatomic) char supportsConversationHandoff;
@property (readonly, nonatomic) char supportsVideo;
@property (nonatomic) char wantsLeaveOnInvalidation;
@property (copy, nonatomic) NSString *pseudonymFeatureID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSSet *supportedMediaTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (char)isEqualToConversationProvider:(id)a0;

@end
