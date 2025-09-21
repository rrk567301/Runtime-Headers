@class NSNumber, NSString;

@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long domain;
@property (retain, nonatomic) NSNumber *instance;
@property (readonly, nonatomic) NSString *identifier;

+ (id)descriptorWithSubscriptionContext:(id)a0;
+ (id)telephonyDescriptorWithInstance:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(long long)a0 instance:(id)a1;

@end
