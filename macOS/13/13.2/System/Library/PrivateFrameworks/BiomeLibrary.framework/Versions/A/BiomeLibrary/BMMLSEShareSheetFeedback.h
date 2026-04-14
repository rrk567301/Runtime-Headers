@class NSString;

@interface BMMLSEShareSheetFeedback : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long identifier;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) int engagementType;
@property (readonly, nonatomic) unsigned int visiblePeopleSuggestionCount;
@property (nonatomic) BOOL hasVisiblePeopleSuggestionCount;
@property (readonly, nonatomic) BOOL airdropOptionShown;
@property (nonatomic) BOOL hasAirdropOptionShown;
@property (readonly, nonatomic) long long engagedSuggestionIdentifier;
@property (nonatomic) BOOL hasEngagedSuggestionIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithIdentifier:(id)a0 engagementType:(int)a1 visiblePeopleSuggestionCount:(id)a2 airdropOptionShown:(id)a3 engagedSuggestionIdentifier:(id)a4;

@end
