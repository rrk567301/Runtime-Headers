@class NSString;

@interface ATXWidgetPersonality : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) NSString *kind;

+ (id)stringRepresentationForATXHomeScreenWidgetDescriptor:(id)a0;
+ (id)stringRepresentationForExtensionBundleId:(id)a0 kind:(id)a1;
+ (id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)a0;
+ (id)widgetKindForWidgetPersonalityStringRepresentation:(id)a0;

- (id)personality;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDescriptor:(id)a0;
- (id)initWithStringRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtensionBundleId:(id)a0 kind:(id)a1;

@end
