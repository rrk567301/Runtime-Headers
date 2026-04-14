@class NSData;

@interface GATSchemaGATLoadScreenContentEventStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exist : 1; } _has;
}

@property (nonatomic) BOOL exist;
@property (nonatomic) BOOL hasExist;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExist;

@end
