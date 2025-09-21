@class NSSet;

@interface searchToolL2_MobileSMSInput : NSObject <MLFeatureProvider>

@property (nonatomic) double sparseL1;
@property (nonatomic) double denseL1;
@property (nonatomic) double documentEmbeddingAvailable;
@property (nonatomic) double has_query_text_embedding;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemRecipients_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_LOCATION;
@property (nonatomic) double kMDItemAppEntityTitle_QUPP_ARG_LOCATION;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_PERSON_SENDER;
@property (nonatomic) double kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemAuthorAddresses_QUPP_ARG_PERSON_SENDER;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithSparseL1:(double)a0 denseL1:(double)a1 documentEmbeddingAvailable:(double)a2 has_query_text_embedding:(double)a3 kMDItemTextContent_QUPP_ARG_SEARCH_TERM:(double)a4 kMDItemRecipients_QUPP_ARG_PERSON:(double)a5 kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM:(double)a6 kMDItemTextContent_QUPP_ARG_PERSON:(double)a7 kMDItemAuthors_QUPP_ARG_PERSON:(double)a8 kMDItemTextContent_QUPP_ARG_LOCATION:(double)a9 kMDItemAppEntityTitle_QUPP_ARG_LOCATION:(double)a10 kMDItemAuthors_QUPP_ARG_PERSON_SENDER:(double)a11 kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON:(double)a12 kMDItemAuthorAddresses_QUPP_ARG_PERSON_SENDER:(double)a13;

@end
