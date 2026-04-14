@class NSData;

@interface ASRSchemaASREntityMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char entityRank : 1; } _has;
}

@property (nonatomic) unsigned int entityRank;
@property (nonatomic) BOOL hasEntityRank;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteEntityRank;

@end
