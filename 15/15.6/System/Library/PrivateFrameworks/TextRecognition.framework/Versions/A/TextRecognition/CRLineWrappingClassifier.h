@class MLModel, NSString;

@interface CRLineWrappingClassifier : NSObject

@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) unsigned long long featureCount;
@property (readonly, nonatomic) NSString *modelLocale;

+ (char)_lineWrappingShouldFallBackForLocale:(id)a0;
+ (char)localeIsSupported:(id)a0;
+ (id)localeToModelMap;
+ (id)modelLocaleForLocale:(id)a0;
+ (id)urlOfModelForLocale:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithLocale:(id)a0;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;

@end
