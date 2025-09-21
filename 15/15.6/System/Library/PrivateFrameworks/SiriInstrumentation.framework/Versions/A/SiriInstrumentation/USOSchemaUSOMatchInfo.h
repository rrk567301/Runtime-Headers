@class NSArray, NSData;

@interface USOSchemaUSOMatchInfo : SISchemaInstrumentationMessage {
    struct { unsigned char matchSignalBitset : 1; unsigned char matchScore : 1; unsigned char maxTokenCount : 1; unsigned char matchedTokenCount : 1; unsigned char maxStopWordCount : 1; unsigned char matchedStopWordCount : 1; unsigned char editDistance : 1; unsigned char maxAliasCount : 1; unsigned char matchedAliasCount : 1; } _has;
}

@property (nonatomic) unsigned int matchSignalBitset;
@property (nonatomic) char hasMatchSignalBitset;
@property (nonatomic) float matchScore;
@property (nonatomic) char hasMatchScore;
@property (nonatomic) unsigned int maxTokenCount;
@property (nonatomic) char hasMaxTokenCount;
@property (nonatomic) unsigned int matchedTokenCount;
@property (nonatomic) char hasMatchedTokenCount;
@property (nonatomic) unsigned int maxStopWordCount;
@property (nonatomic) char hasMaxStopWordCount;
@property (nonatomic) unsigned int matchedStopWordCount;
@property (nonatomic) char hasMatchedStopWordCount;
@property (nonatomic) unsigned int editDistance;
@property (nonatomic) char hasEditDistance;
@property (nonatomic) unsigned int maxAliasCount;
@property (nonatomic) char hasMaxAliasCount;
@property (nonatomic) unsigned int matchedAliasCount;
@property (nonatomic) char hasMatchedAliasCount;
@property (copy, nonatomic) NSArray *matchedAliasTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addMatchedAliasTypes:(int)a0;
- (void)clearMatchedAliasTypes;
- (void)deleteEditDistance;
- (void)deleteMatchScore;
- (void)deleteMatchSignalBitset;
- (void)deleteMatchedAliasCount;
- (void)deleteMatchedAliasTypes;
- (void)deleteMatchedStopWordCount;
- (void)deleteMatchedTokenCount;
- (void)deleteMaxAliasCount;
- (void)deleteMaxStopWordCount;
- (void)deleteMaxTokenCount;
- (int)matchedAliasTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)matchedAliasTypesCount;
- (id)suppressMessageUnderConditions;

@end
