@class NSData;

@interface ASRSpeechProfileSchemaASRSpeechProfileUpdateEntityMetric : SISchemaInstrumentationMessage {
    struct { unsigned char entityCategory : 1; unsigned char numEntities : 1; } _has;
}

@property (nonatomic) int entityCategory;
@property (nonatomic) BOOL hasEntityCategory;
@property (nonatomic) unsigned int numEntities;
@property (nonatomic) BOOL hasNumEntities;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityCategory;
- (void)deleteNumEntities;

@end
