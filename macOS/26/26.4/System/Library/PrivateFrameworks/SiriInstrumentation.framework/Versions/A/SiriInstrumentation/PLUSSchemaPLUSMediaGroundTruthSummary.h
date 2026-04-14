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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGroundTruthCount;
- (void)deleteMediaEntityCount;
- (void)deleteSource;

@end
