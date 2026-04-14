@class NSData;

@interface SISchemaTypingRequestTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *keyboardAppearanceBringUpTurnID;
@property (nonatomic) BOOL hasKeyboardAppearanceBringUpTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteKeyboardAppearanceBringUpTurnID;

@end
