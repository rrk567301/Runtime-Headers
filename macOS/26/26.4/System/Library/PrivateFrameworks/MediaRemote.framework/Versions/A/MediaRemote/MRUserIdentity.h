@class NSData, NSString, _MRUserIdentityProtobuf;

@interface MRUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRUserIdentityProtobuf *protobuf;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;

+ (id)basicIdentityWithIdentifier:(id)a0 displayName:(id)a1;
+ (void)fetchIdentityForDSID:(id)a0 completion:(id /* block */)a1;
+ (id)resolvableIdentityWithIdentifier:(id)a0;
+ (id)resolvableIdentityWithIdentifier:(id)a0 displayName:(id)a1;

- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobufData:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 type:(long long)a2;

@end
