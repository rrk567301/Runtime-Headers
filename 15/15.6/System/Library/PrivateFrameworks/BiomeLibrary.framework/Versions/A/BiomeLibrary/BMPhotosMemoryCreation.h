@class NSString, NSArray;

@interface BMPhotosMemoryCreation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char queryContainsPersonEntity;
@property (nonatomic) char hasQueryContainsPersonEntity;
@property (readonly, nonatomic) char queryContainsActivityEntity;
@property (nonatomic) char hasQueryContainsActivityEntity;
@property (readonly, nonatomic) char queryContainsTimeEntity;
@property (nonatomic) char hasQueryContainsTimeEntity;
@property (readonly, nonatomic) char queryContainsLocationEntity;
@property (nonatomic) char hasQueryContainsLocationEntity;
@property (readonly, nonatomic) char queryContainsTripEntity;
@property (nonatomic) char hasQueryContainsTripEntity;
@property (readonly, nonatomic) char queryContainsMusicArtist;
@property (nonatomic) char hasQueryContainsMusicArtist;
@property (readonly, nonatomic) char queryContainsMusicSong;
@property (nonatomic) char hasQueryContainsMusicSong;
@property (readonly, nonatomic) char queryContainsMusicGenre;
@property (nonatomic) char hasQueryContainsMusicGenre;
@property (readonly, nonatomic) char queryContainsMusicMood;
@property (nonatomic) char hasQueryContainsMusicMood;
@property (readonly, nonatomic) NSArray *globalTraits;
@property (readonly, nonatomic) char memoryGenerated;
@property (nonatomic) char hasMemoryGenerated;
@property (readonly, nonatomic) int memoryAssetCount;
@property (readonly, nonatomic) NSString *rawPrompt;
@property (readonly, nonatomic) NSArray *queryActivityEntities;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) int memoryPromptSuggestionSource;
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
- (id)initWithIdentifier:(id)a0 queryContainsPersonEntity:(id)a1 queryContainsActivityEntity:(id)a2 queryContainsTimeEntity:(id)a3 queryContainsLocationEntity:(id)a4 queryContainsTripEntity:(id)a5 queryContainsMusicArtist:(id)a6 queryContainsMusicSong:(id)a7 queryContainsMusicGenre:(id)a8 queryContainsMusicMood:(id)a9 globalTraits:(id)a10 memoryGenerated:(id)a11 memoryAssetCount:(int)a12 rawPrompt:(id)a13 queryActivityEntities:(id)a14 language:(id)a15 region:(id)a16 memoryPromptSuggestionSource:(int)a17;
- (id)initByReadFrom:(id)a0;
- (id)_queryActivityEntitiesJSONArray;
- (id)_globalTraitsJSONArray;
- (id)initWithIdentifier:(id)a0 queryContainsPersonEntity:(id)a1 queryContainsActivityEntity:(id)a2 queryContainsTimeEntity:(id)a3 queryContainsLocationEntity:(id)a4 queryContainsTripEntity:(id)a5 queryContainsMusicArtist:(id)a6 queryContainsMusicSong:(id)a7 queryContainsMusicGenre:(id)a8 queryContainsMusicMood:(id)a9 globalTraits:(id)a10 memoryGenerated:(id)a11 memoryAssetCount:(int)a12;

@end
