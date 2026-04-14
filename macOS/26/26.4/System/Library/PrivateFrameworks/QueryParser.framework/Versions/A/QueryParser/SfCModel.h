@class NSString, NSDictionary, NSLocale, SfC;

@interface SfCModel : NSObject <QCClassificationModel>

@property (retain, nonatomic) SfC *sfcModel;
@property (retain, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *modelMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundle;
+ (void)setBundle:(id)a0;
+ (id)assetURLForLocale:(id)a0;
+ (id)assetURLFromBundleForLocale:(id)a0;
+ (id)assetURLFromSpotlightResourceForLocale:(id)a0;
+ (void)setShouldUseSpotlightResource:(BOOL)a0;
+ (BOOL)shouldUseSpotlightResource;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (id)_convertEmbeddingToFloatArray:(id)a0;
- (void)classificationForEmbedding:(id)a0 queryID:(long long)a1 completionHandler:(id /* block */)a2;
- (id)classificationForEmbeddingArray:(id)a0 queryID:(long long)a1 error:(id *)a2;

@end
