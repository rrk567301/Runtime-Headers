@class NSDictionary;

@interface LNBundleActionsMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *actions;
@property (readonly, nonatomic) NSDictionary *systemProtocolDefaults;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActions:(id)a0 systemProtocolDefaults:(id)a1;

@end
