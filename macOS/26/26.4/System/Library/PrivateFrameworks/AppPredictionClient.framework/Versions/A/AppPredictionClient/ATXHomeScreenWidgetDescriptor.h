@class NSString, CHSWidgetDescriptor;

@interface ATXHomeScreenWidgetDescriptor : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) CHSWidgetDescriptor *avocadoDescriptor;
@property (nonatomic) unsigned long long suggestedSize;
@property (nonatomic) long long rankType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)widgetKind;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)extensionBundleIdForMetrics;

@end
