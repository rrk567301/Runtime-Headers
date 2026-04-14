@class NSData;

@interface CMSchemaCMSearchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char searchStrategy : 1; unsigned char resultCount : 1; unsigned char highestMatchScore : 1; unsigned char lowestMatchScore : 1; } _has;
}

@property (nonatomic) int searchStrategy;
@property (nonatomic) BOOL hasSearchStrategy;
@property (nonatomic) int resultCount;
@property (nonatomic) BOOL hasResultCount;
@property (nonatomic) double highestMatchScore;
@property (nonatomic) BOOL hasHighestMatchScore;
@property (nonatomic) double lowestMatchScore;
@property (nonatomic) BOOL hasLowestMatchScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteHighestMatchScore;
- (void)deleteLowestMatchScore;
- (void)deleteResultCount;
- (void)deleteSearchStrategy;

@end
