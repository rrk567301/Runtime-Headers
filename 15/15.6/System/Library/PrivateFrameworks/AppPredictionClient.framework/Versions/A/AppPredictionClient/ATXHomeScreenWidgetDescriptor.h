@class NSString, CHSWidgetDescriptor;

@interface ATXHomeScreenWidgetDescriptor : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) CHSWidgetDescriptor *avocadoDescriptor;
@property (nonatomic) unsigned long long suggestedSize;
@property (nonatomic) long long rankType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)compactDescription;
- (id)widgetKind;
- (id)extensionBundleIdForMetrics;

@end
