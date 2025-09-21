@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAlias:(id)a0 pushToken:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
