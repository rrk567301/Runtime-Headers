@class NSData;

@interface SISchemaCardSectionKeyboardInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char keyboardPresented : 1; unsigned char keyboardLocale : 1; unsigned char existingText : 1; } _has;
}

@property (nonatomic) char keyboardPresented;
@property (nonatomic) char hasKeyboardPresented;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) char hasKeyboardLocale;
@property (nonatomic) char existingText;
@property (nonatomic) char hasExistingText;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExistingText;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardPresented;
- (id)suppressMessageUnderConditions;

@end
