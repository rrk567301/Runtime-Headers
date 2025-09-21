@class NSData, NSString, NSArray, NSDate, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NTPBRecipeItem, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, FCFeedPersonalizedItemScoreProfile, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata;

@interface FCRecipeItem : NSObject <FCRecipeScorable>

@property (readonly, nonatomic) NTPBRecipeItem *pbRecipeItem;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *surfacedBy;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *personalizationData;
@property (readonly, nonatomic) NSData *rapidUpdatePersonalizationData;
@property (readonly, nonatomic) NSData *eventAggregationPersonalizationData;
@property (readonly, copy, nonatomic) NSDate *lastReferenceDate;
@property (readonly, nonatomic) NSArray *articleIDs;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) unsigned long long halfLife;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) long long bodyTextLength;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL isFeatureCandidate;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isCoread;
@property (readonly, nonatomic) BOOL reduceVisibility;
@property (readonly, nonatomic) BOOL reduceVisibilityForNonFollowers;
@property (readonly, nonatomic) BOOL webConverted;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) unsigned long long halfLifeOverride;
@property (readonly, nonatomic) NSData *float16TitleEncoding;
@property (readonly, nonatomic) NSData *float16FullBodyEncoding;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) NSData *thumbnailPerceptualHash;
@property (readonly, nonatomic) double conditionalScore;
@property (readonly, nonatomic) BOOL isAIGenerated;
@property (readonly, nonatomic) BOOL isSportsHighlight;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keysForRecipeRecordWithRecordSource:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)enumerateTopicCohortsWithBlock:(id /* block */)a0;
- (void)enumerateTopicConversionStatsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)recipeRecord;
- (id)initWithRecipeRecord:(id)a0 surfacedBy:(id)a1 error:(id *)a2;

@end
