@class NSArray, NSData, SISchemaUUID;

@interface SISchemaLinkedAccessoryState : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *accessoryId;
@property (nonatomic) BOOL hasAccessoryId;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addGradingOptInStateChanges:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)deleteAccessoryId;
- (void)deleteGradingOptInStateChanges;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradingOptInStateChangesCount;

@end
