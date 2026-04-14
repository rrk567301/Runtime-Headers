@class iconclassification, NSString;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) iconclassification *mlModel;
@property (nonatomic) BOOL writeDebugImage;
@property (retain, nonatomic) NSString *loggingName;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (id)mobileAssetType;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)modelResourceNames;
- (id)mlModelClasses;
- (id)classLabelForIdx:(unsigned long long)a0;
- (id)_localizedClassForClass:(id)a0;

@end
