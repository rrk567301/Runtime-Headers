@class NSData;

@interface PLUSSchemaPLUSContactGroundTruthSourceSummary : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCount;
- (void)deleteSource;

@end
