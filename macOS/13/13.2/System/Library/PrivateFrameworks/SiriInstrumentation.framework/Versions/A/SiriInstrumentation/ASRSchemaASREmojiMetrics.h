@class NSArray, NSData;

@interface ASRSchemaASREmojiMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char isEmojiPersonalizationUsed : 1; unsigned char isEmojiDisambiguationUsed : 1; unsigned char isEmojiExpectedButNotRecognized : 1; } _has;
}

@property (copy, nonatomic) NSArray *recognizedEmojis;
@property (nonatomic) BOOL isEmojiPersonalizationUsed;
@property (nonatomic) BOOL hasIsEmojiPersonalizationUsed;
@property (nonatomic) BOOL isEmojiDisambiguationUsed;
@property (nonatomic) BOOL hasIsEmojiDisambiguationUsed;
@property (nonatomic) BOOL isEmojiExpectedButNotRecognized;
@property (nonatomic) BOOL hasIsEmojiExpectedButNotRecognized;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearRecognizedEmojis;
- (void)deleteRecognizedEmojis;
- (void)addRecognizedEmojis:(id)a0;
- (unsigned long long)recognizedEmojisCount;
- (id)recognizedEmojisAtIndex:(unsigned long long)a0;
- (void)deleteIsEmojiPersonalizationUsed;
- (void)deleteIsEmojiDisambiguationUsed;
- (void)deleteIsEmojiExpectedButNotRecognized;

@end
