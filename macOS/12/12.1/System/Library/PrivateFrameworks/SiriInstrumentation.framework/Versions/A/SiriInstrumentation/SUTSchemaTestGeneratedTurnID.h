@class NSData, SISchemaUUID;

@interface SUTSchemaTestGeneratedTurnID : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
