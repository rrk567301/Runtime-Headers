@class NSNumber, NSString;

@interface CTServiceDescriptor : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long domain;
@property (retain, nonatomic) NSNumber *instance;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

+ (id)descriptorWithSubscriptionContext:(id)a0;
+ (id)telephonyDescriptorWithInstance:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(long long)a0 instance:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
