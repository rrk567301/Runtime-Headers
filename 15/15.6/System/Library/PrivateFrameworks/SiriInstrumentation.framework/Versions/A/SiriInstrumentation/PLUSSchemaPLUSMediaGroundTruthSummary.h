@class NSData;

@interface PLUSSchemaPLUSMediaGroundTruthSummary : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char groundTruthCount : 1; unsigned char mediaEntityCount : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (nonatomic) int groundTruthCount;
@property (nonatomic) char hasGroundTruthCount;
@property (nonatomic) int mediaEntityCount;
@property (nonatomic) char hasMediaEntityCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGroundTruthCount;
- (void)deleteMediaEntityCount;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
