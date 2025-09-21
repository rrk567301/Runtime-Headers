@class NSString;
@protocol AMSPaymentSheetAssetConfiguration;

@interface AMSPaymentSheetInlineImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) id<AMSPaymentSheetAssetConfiguration> localAssetConfiguration;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic, getter=isServerSupplied) char serverSupplied;
@property (readonly, copy) NSString *region;
@property (readonly, nonatomic) char tint;
@property (readonly, copy) NSString *URLString;
@property (readonly, copy) NSString *value;

+ (id)textEncapsulationForServerValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithURLString:(id)a0;
- (long long)_defaultAssetType;
- (id)_imageAssetConfigurationForDictionary:(id)a0;
- (long long)_ratingTypeForType:(id)a0;
- (long long)_scaleForString:(id)a0;
- (id)_symbolAssetConfigurationForDictionary:(id)a0;

@end
