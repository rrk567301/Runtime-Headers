@class iconclassification, NSArray, NSString;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) iconclassification *mlModel;
@property (readonly, nonatomic) NSArray *iconClassLabels;
@property (nonatomic) BOOL writeDebugImage;
@property (retain, nonatomic) NSString *loggingName;

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (unsigned long long)maxSupportedFormatVersion;
- (void).cxx_destruct;
- (unsigned long long)minSupportedFormatVersion;
- (id)mobileAssetType;
- (void)_initializeClassLabels;
- (id)_localizedClassForClass:(id)a0;
- (id)classLabelForIdx:(unsigned long long)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;

@end
