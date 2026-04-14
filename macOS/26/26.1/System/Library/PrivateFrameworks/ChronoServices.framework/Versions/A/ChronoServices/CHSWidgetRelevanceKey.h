@class NSString, CHSExtensionIdentity;

@interface CHSWidgetRelevanceKey : NSObject <CHSWidgetIdentifiable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1;

@end
