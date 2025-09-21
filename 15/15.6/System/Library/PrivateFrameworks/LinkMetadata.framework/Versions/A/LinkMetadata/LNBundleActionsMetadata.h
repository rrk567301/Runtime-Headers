@class NSDictionary;

@interface LNBundleActionsMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *actions;
@property (readonly, nonatomic) NSDictionary *systemProtocolDefaults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0 systemProtocolDefaults:(id)a1;

@end
