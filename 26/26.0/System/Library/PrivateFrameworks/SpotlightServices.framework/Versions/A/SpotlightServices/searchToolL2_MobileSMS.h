@class MLModel;

@interface searchToolL2_MobileSMS : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromSparseL1:(double)a0 denseL1:(double)a1 documentEmbeddingAvailable:(double)a2 has_query_text_embedding:(double)a3 kMDItemTextContent_QUPP_ARG_SEARCH_TERM:(double)a4 kMDItemRecipients_QUPP_ARG_PERSON:(double)a5 kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM:(double)a6 kMDItemTextContent_QUPP_ARG_PERSON:(double)a7 kMDItemAuthors_QUPP_ARG_PERSON:(double)a8 kMDItemTextContent_QUPP_ARG_LOCATION:(double)a9 kMDItemAppEntityTitle_QUPP_ARG_LOCATION:(double)a10 kMDItemAuthors_QUPP_ARG_PERSON_SENDER:(double)a11 kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON:(double)a12 kMDItemAuthorAddresses_QUPP_ARG_PERSON_SENDER:(double)a13 error:(id *)a14;

@end
