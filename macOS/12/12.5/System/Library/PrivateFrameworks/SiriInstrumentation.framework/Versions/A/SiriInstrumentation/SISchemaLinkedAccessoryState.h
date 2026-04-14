@class NSArray, NSData, SISchemaUUID;

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)addGradingOptInStateChanges:(id)a0;
- (void)deleteGradingOptInStateChanges;
- (unsigned long long)gradingOptInStateChangesCount;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (void)deleteAccessoryId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
