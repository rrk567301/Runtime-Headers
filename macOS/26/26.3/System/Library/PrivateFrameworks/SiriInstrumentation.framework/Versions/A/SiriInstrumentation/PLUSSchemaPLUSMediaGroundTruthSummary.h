@class NSData;

@interface PLUSSchemaPLUSMediaGroundTruthSummary : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char groundTruthCount : 1; unsigned char mediaEntityCount : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int groundTruthCount;
@property (nonatomic) BOOL hasGroundTruthCount;
@property (nonatomic) int mediaEntityCount;
@property (nonatomic) BOOL hasMediaEntityCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteGroundTruthCount;
- (void)deleteMediaEntityCount;
- (void)deleteSource;

@end
