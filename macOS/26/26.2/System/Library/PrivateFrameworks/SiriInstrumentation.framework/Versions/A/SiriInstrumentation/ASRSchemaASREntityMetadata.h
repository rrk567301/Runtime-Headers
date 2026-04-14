@class NSData;

@interface ASRSchemaASREntityMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char entityRank : 1; } _has;
}

@property (nonatomic) unsigned int entityRank;
@property (nonatomic) BOOL hasEntityRank;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteEntityRank;

@end
