@class MLModel;

@interface searchToolL2_mobilemail : NSObject

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
- (id)predictionFromSparseL1:(double)a0 denseL1:(double)a1 isMailCategoryHighImpact:(double)a2 isMailCategoryPromotions:(double)a3 documentEmbeddingAvailable:(double)a4 has_query_text_embedding:(double)a5 kMDItemTextContent_QUPP_ARG_SEARCH_TERM:(double)a6 kMDItemSubject_QUPP_ARG_SEARCH_TERM:(double)a7 kMDItemTextContent_QUPP_ARG_PERSON:(double)a8 kMDItemTextContent_QUPP_ARG_LOCATION:(double)a9 kMDItemAuthors_QUPP_ARG_SEARCH_TERM:(double)a10 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_FLIGHT:(double)a11 kMDItemTextContent_QUPP_ARG_TIME:(double)a12 kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM:(double)a13 kMDItemSubject_QUPP_ARG_LOCATION:(double)a14 kMDItemSubject_QUPP_ARG_PERSON:(double)a15 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_HOTEL:(double)a16 kMDItemAppEntityTitle_QUPP_ARG_LOCATION:(double)a17 kMDItemTextContent_QUPP_ARG_APP_CONTAINS_TYPE_CONTACT:(double)a18 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_RESTAURANT:(double)a19 kMDItemAuthors_QUPP_ARG_PERSON_SENDER:(double)a20 kMDItemTextContent_QUPP_ARG_LOCATION_ARRIVAL:(double)a21 kMDItemAuthors_QUPP_ARG_PERSON:(double)a22 kMDItemSubject_QUPP_ARG_TIME:(double)a23 kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON_SENDER:(double)a24 kMDItemAuthors_QUPP_ARG_LOCATION:(double)a25 error:(id *)a26;

@end
