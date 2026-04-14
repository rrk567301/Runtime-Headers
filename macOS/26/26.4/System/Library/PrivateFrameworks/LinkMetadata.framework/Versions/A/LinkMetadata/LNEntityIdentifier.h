@class NSString;

@interface LNEntityIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;

- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTypeIdentifier:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithValue:(id)a0 typeName:(id)a1;
- (id)initWithTypeIdentifier:(id)a0 bundleIdentifier:(id)a1 instanceIdentifier:(id)a2;
- (id)typeAndIdentifier;
- (id)initWithValue:(id)a0 scope:(long long)a1 typeName:(id)a2;

@end
