@class NSNumber, NSString, UTType;

@interface PXPhotosExportConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) long long encodingPolicy;
@property (readonly, nonatomic) char shouldIncludeLocation;
@property (readonly, nonatomic) char shouldIncludeCaption;
@property (readonly, nonatomic) char shouldExportForMail;
@property (readonly, nonatomic) NSNumber *downscalingTargetDimension;
@property (readonly, nonatomic) UTType *possibleContentType;
@property (copy, nonatomic) NSString *activityTypeForAssetExportAnalytics;

+ (id)configurationWithQueryItems:(id)a0 possibleContentType:(id)a1;
+ (id)containerConfigurationWithShouldIncludeLocation:(char)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)variantToRequest:(id)a0 asset:(id)a1;

@end
