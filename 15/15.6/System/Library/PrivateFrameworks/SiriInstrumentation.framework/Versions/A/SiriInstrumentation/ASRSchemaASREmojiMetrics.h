@class NSArray, NSData;

@interface ASRSchemaASREmojiMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isEmojiPersonalizationUsed : 1; unsigned char isEmojiDisambiguationUsed : 1; unsigned char isEmojiExpectedButNotRecognized : 1; } _has;
}

@property (copy, nonatomic) NSArray *recognizedEmojis;
@property (nonatomic) char isEmojiPersonalizationUsed;
@property (nonatomic) char hasIsEmojiPersonalizationUsed;
@property (nonatomic) char isEmojiDisambiguationUsed;
@property (nonatomic) char hasIsEmojiDisambiguationUsed;
@property (nonatomic) char isEmojiExpectedButNotRecognized;
@property (nonatomic) char hasIsEmojiExpectedButNotRecognized;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsEmojiDisambiguationUsed;
- (void)addRecognizedEmojis:(id)a0;
- (void)clearRecognizedEmojis;
- (void)deleteIsEmojiExpectedButNotRecognized;
- (void)deleteIsEmojiPersonalizationUsed;
- (void)deleteRecognizedEmojis;
- (id)recognizedEmojisAtIndex:(unsigned long long)a0;
- (unsigned long long)recognizedEmojisCount;
- (id)suppressMessageUnderConditions;

@end
