@class NSString;

@interface BMAeroMLPhotosSearchInsights : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char wasThereAnyResultsShown;
@property (nonatomic) char hasWasThereAnyResultsShown;
@property (readonly, nonatomic) unsigned int searchResultSize;
@property (nonatomic) char hasSearchResultSize;
@property (readonly, nonatomic) char didUserViewAnyPhoto;
@property (nonatomic) char hasDidUserViewAnyPhoto;
@property (readonly, nonatomic) unsigned int viewedPhotoCount;
@property (nonatomic) char hasViewedPhotoCount;
@property (readonly, nonatomic) int uiSurface;
@property (readonly, nonatomic) unsigned int sizeOfPhotoDB;
@property (nonatomic) char hasSizeOfPhotoDB;
@property (readonly, nonatomic) unsigned int numberOfSearchesFromThisSurfaceLastWeek;
@property (nonatomic) char hasNumberOfSearchesFromThisSurfaceLastWeek;
@property (readonly, nonatomic) unsigned int numberOfSearchesFromThisSurfaceWeeklyAvg;
@property (nonatomic) char hasNumberOfSearchesFromThisSurfaceWeeklyAvg;
@property (readonly, nonatomic) NSString *queryRaw;
@property (readonly, nonatomic) unsigned int numberOfTokensInQuery;
@property (nonatomic) char hasNumberOfTokensInQuery;
@property (readonly, nonatomic) unsigned int numberOfKnownEntitiesInQuery;
@property (nonatomic) char hasNumberOfKnownEntitiesInQuery;
@property (readonly, nonatomic) char isSpecificPersonInQuery;
@property (nonatomic) char hasIsSpecificPersonInQuery;
@property (readonly, nonatomic) char isGeneralPersonReferenceInQuery;
@property (nonatomic) char hasIsGeneralPersonReferenceInQuery;
@property (readonly, nonatomic) char isSpecificLocationInQuery;
@property (nonatomic) char hasIsSpecificLocationInQuery;
@property (readonly, nonatomic) char isGeneralLocationReferenceInQuery;
@property (nonatomic) char hasIsGeneralLocationReferenceInQuery;
@property (readonly, nonatomic) char isSpecificDateInQuery;
@property (nonatomic) char hasIsSpecificDateInQuery;
@property (readonly, nonatomic) char isGeneralDateReferenceInQuery;
@property (nonatomic) char hasIsGeneralDateReferenceInQuery;
@property (readonly, nonatomic) char isHolidayReferenceInQuery;
@property (nonatomic) char hasIsHolidayReferenceInQuery;
@property (readonly, nonatomic) char isActionRunningInQuery;
@property (nonatomic) char hasIsActionRunningInQuery;
@property (readonly, nonatomic) char isActionHoldingInQuery;
@property (nonatomic) char hasIsActionHoldingInQuery;
@property (readonly, nonatomic) char isActionClimbingInQuery;
@property (nonatomic) char hasIsActionClimbingInQuery;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithWasThereAnyResultsShown:(id)a0 searchResultSize:(id)a1 didUserViewAnyPhoto:(id)a2 viewedPhotoCount:(id)a3 uiSurface:(int)a4 sizeOfPhotoDB:(id)a5 numberOfSearchesFromThisSurfaceLastWeek:(id)a6 numberOfSearchesFromThisSurfaceWeeklyAvg:(id)a7 queryRaw:(id)a8 numberOfTokensInQuery:(id)a9 numberOfKnownEntitiesInQuery:(id)a10 isSpecificPersonInQuery:(id)a11 isGeneralPersonReferenceInQuery:(id)a12 isSpecificLocationInQuery:(id)a13 isGeneralLocationReferenceInQuery:(id)a14 isSpecificDateInQuery:(id)a15 isGeneralDateReferenceInQuery:(id)a16 isHolidayReferenceInQuery:(id)a17 isActionRunningInQuery:(id)a18 isActionHoldingInQuery:(id)a19 isActionClimbingInQuery:(id)a20;

@end
