@class ATXWidgetClientIdentity, NSNumber, NSArray;

@interface ATXWidgetGalleryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXWidgetClientIdentity *clientIdentity;
@property (nonatomic) unsigned long long galleryVariant;
@property (nonatomic) unsigned long long widgetGridSize;
@property (nonatomic) unsigned long long widgetFamilyMask;
@property (retain, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *denyListOfExtensions;

- (id)initWithClientIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
