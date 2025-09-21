@class NSSet;

@interface searchToolL2_mobilemailInput : NSObject <MLFeatureProvider>

@property (nonatomic) double sparseL1;
@property (nonatomic) double denseL1;
@property (nonatomic) double isMailCategoryHighImpact;
@property (nonatomic) double isMailCategoryPromotions;
@property (nonatomic) double documentEmbeddingAvailable;
@property (nonatomic) double has_query_text_embedding;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemSubject_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_LOCATION;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_EVENT_TYPE_FLIGHT;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_TIME;
@property (nonatomic) double kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM;
@property (nonatomic) double kMDItemSubject_QUPP_ARG_LOCATION;
@property (nonatomic) double kMDItemSubject_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_EVENT_TYPE_HOTEL;
@property (nonatomic) double kMDItemAppEntityTitle_QUPP_ARG_LOCATION;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_APP_CONTAINS_TYPE_CONTACT;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_EVENT_TYPE_RESTAURANT;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_PERSON_SENDER;
@property (nonatomic) double kMDItemTextContent_QUPP_ARG_LOCATION_ARRIVAL;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_PERSON;
@property (nonatomic) double kMDItemSubject_QUPP_ARG_TIME;
@property (nonatomic) double kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON_SENDER;
@property (nonatomic) double kMDItemAuthors_QUPP_ARG_LOCATION;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithSparseL1:(double)a0 denseL1:(double)a1 isMailCategoryHighImpact:(double)a2 isMailCategoryPromotions:(double)a3 documentEmbeddingAvailable:(double)a4 has_query_text_embedding:(double)a5 kMDItemTextContent_QUPP_ARG_SEARCH_TERM:(double)a6 kMDItemSubject_QUPP_ARG_SEARCH_TERM:(double)a7 kMDItemTextContent_QUPP_ARG_PERSON:(double)a8 kMDItemTextContent_QUPP_ARG_LOCATION:(double)a9 kMDItemAuthors_QUPP_ARG_SEARCH_TERM:(double)a10 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_FLIGHT:(double)a11 kMDItemTextContent_QUPP_ARG_TIME:(double)a12 kMDItemAppEntityTitle_QUPP_ARG_SEARCH_TERM:(double)a13 kMDItemSubject_QUPP_ARG_LOCATION:(double)a14 kMDItemSubject_QUPP_ARG_PERSON:(double)a15 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_HOTEL:(double)a16 kMDItemAppEntityTitle_QUPP_ARG_LOCATION:(double)a17 kMDItemTextContent_QUPP_ARG_APP_CONTAINS_TYPE_CONTACT:(double)a18 kMDItemTextContent_QUPP_ARG_EVENT_TYPE_RESTAURANT:(double)a19 kMDItemAuthors_QUPP_ARG_PERSON_SENDER:(double)a20 kMDItemTextContent_QUPP_ARG_LOCATION_ARRIVAL:(double)a21 kMDItemAuthors_QUPP_ARG_PERSON:(double)a22 kMDItemSubject_QUPP_ARG_TIME:(double)a23 kMDItemAuthorEmailAddresses_QUPP_ARG_PERSON_SENDER:(double)a24 kMDItemAuthors_QUPP_ARG_LOCATION:(double)a25;

@end
