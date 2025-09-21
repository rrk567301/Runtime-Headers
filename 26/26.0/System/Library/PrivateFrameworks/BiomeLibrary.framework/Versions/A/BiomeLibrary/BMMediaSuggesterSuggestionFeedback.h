@class NSString, BMMediaSuggesterSuggestionFeedbackMediaIntent, NSArray;

@interface BMMediaSuggesterSuggestionFeedback : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) double numberOfVisibleSuggestions;
@property (nonatomic) BOOL hasNumberOfVisibleSuggestions;
@property (readonly, nonatomic) int indexSelected;
@property (nonatomic) BOOL hasIndexSelected;
@property (readonly, nonatomic) BMMediaSuggesterSuggestionFeedbackMediaIntent *intent;
@property (readonly, nonatomic) int engagementType;
@property (readonly, nonatomic) double suggestionsRequestDate;
@property (nonatomic) BOOL hasSuggestionsRequestDate;
@property (readonly, nonatomic) NSString *targetBundleID;
@property (readonly, nonatomic) int workoutType;
@property (nonatomic) BOOL hasWorkoutType;
@property (readonly, nonatomic) BOOL isNowPlaying;
@property (nonatomic) BOOL hasIsNowPlaying;
@property (readonly, nonatomic) NSArray *allowedBundleIDs;
@property (readonly, nonatomic) NSArray *suggestionsIntent;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_allowedBundleIDsJSONArray;
- (id)_suggestionsIntentJSONArray;
- (id)initWithSessionIdentifier:(id)a0 numberOfVisibleSuggestions:(id)a1 indexSelected:(id)a2 intent:(id)a3 engagementType:(int)a4 suggestionsRequestDate:(id)a5 targetBundleID:(id)a6 workoutType:(id)a7 isNowPlaying:(id)a8 allowedBundleIDs:(id)a9;
- (id)initWithSessionIdentifier:(id)a0 numberOfVisibleSuggestions:(id)a1 indexSelected:(id)a2 intent:(id)a3 engagementType:(int)a4 suggestionsRequestDate:(id)a5 targetBundleID:(id)a6 workoutType:(id)a7 isNowPlaying:(id)a8 allowedBundleIDs:(id)a9 suggestionsIntent:(id)a10;

@end
