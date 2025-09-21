@class NSData;

@interface SISchemaKeyboardDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char keyboardUsed : 1; unsigned char lengthInWords : 1; unsigned char lengthInChars : 1; unsigned char numCharsAdded : 1; unsigned char numCharsDeleted : 1; unsigned char editDistance : 1; unsigned char emojiUsed : 1; unsigned char keyboardLocale : 1; } _has;
}

@property (nonatomic) char keyboardUsed;
@property (nonatomic) char hasKeyboardUsed;
@property (nonatomic) int lengthInWords;
@property (nonatomic) char hasLengthInWords;
@property (nonatomic) int lengthInChars;
@property (nonatomic) char hasLengthInChars;
@property (nonatomic) int numCharsAdded;
@property (nonatomic) char hasNumCharsAdded;
@property (nonatomic) int numCharsDeleted;
@property (nonatomic) char hasNumCharsDeleted;
@property (nonatomic) int editDistance;
@property (nonatomic) char hasEditDistance;
@property (nonatomic) char emojiUsed;
@property (nonatomic) char hasEmojiUsed;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) char hasKeyboardLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEmojiUsed;
- (void)deleteEditDistance;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardUsed;
- (void)deleteLengthInChars;
- (void)deleteLengthInWords;
- (void)deleteNumCharsAdded;
- (void)deleteNumCharsDeleted;
- (id)suppressMessageUnderConditions;

@end
