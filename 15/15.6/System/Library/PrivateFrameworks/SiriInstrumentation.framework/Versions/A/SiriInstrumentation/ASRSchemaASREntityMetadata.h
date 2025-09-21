@class NSData;

@interface ASRSchemaASREntityMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char entityRank : 1; } _has;
}

@property (nonatomic) unsigned int entityRank;
@property (nonatomic) char hasEntityRank;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityRank;
- (id)suppressMessageUnderConditions;

@end
