@class NSData;

@interface CMSchemaCMSearchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char searchStrategy : 1; unsigned char resultCount : 1; unsigned char highestMatchScore : 1; unsigned char lowestMatchScore : 1; } _has;
}

@property (nonatomic) int searchStrategy;
@property (nonatomic) char hasSearchStrategy;
@property (nonatomic) int resultCount;
@property (nonatomic) char hasResultCount;
@property (nonatomic) double highestMatchScore;
@property (nonatomic) char hasHighestMatchScore;
@property (nonatomic) double lowestMatchScore;
@property (nonatomic) char hasLowestMatchScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHighestMatchScore;
- (void)deleteLowestMatchScore;
- (void)deleteResultCount;
- (void)deleteSearchStrategy;
- (id)suppressMessageUnderConditions;

@end
