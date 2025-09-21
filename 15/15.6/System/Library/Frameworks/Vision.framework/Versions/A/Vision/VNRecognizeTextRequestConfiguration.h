@class NSArray;

@interface VNRecognizeTextRequestConfiguration : VNStatefulRequestConfiguration

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) char usesLanguageCorrection;
@property (nonatomic) char automaticallyDetectsLanguage;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic) char keepResourcesLoaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
