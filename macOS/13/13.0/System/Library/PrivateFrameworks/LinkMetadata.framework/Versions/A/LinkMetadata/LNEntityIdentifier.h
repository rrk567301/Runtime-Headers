@class NSString;

@interface LNEntityIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 typeName:(id)a1;
- (id)initWithTypeIdentifier:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithValue:(id)a0 scope:(long long)a1 typeName:(id)a2;

@end
