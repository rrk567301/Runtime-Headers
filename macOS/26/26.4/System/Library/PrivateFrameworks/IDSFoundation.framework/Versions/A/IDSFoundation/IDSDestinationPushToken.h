@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithAlias:(id)a0 pushToken:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
