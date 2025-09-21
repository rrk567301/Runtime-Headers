@class NSData, SISchemaUUID;

@interface GRPSchemaGroupedMessagesGrouping : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) char hasClockIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteClockIdentifier;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
