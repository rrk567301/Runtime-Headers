@class NSData;

@interface SISchemaTypingRequestTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *keyboardAppearanceBringUpTurnID;
@property (nonatomic) BOOL hasKeyboardAppearanceBringUpTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteKeyboardAppearanceBringUpTurnID;

@end
