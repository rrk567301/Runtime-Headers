@class NSData;

@interface SISchemaUEIDictationEnablementPromptShown : SISchemaInstrumentationMessage {
    struct { unsigned char isDictationEnabled : 1; unsigned char isLearnMoreButtonClicked : 1; unsigned char promptVisibilityDurationInMs : 1; } _has;
}

@property (nonatomic) char isDictationEnabled;
@property (nonatomic) char hasIsDictationEnabled;
@property (nonatomic) char isLearnMoreButtonClicked;
@property (nonatomic) char hasIsLearnMoreButtonClicked;
@property (nonatomic) long long promptVisibilityDurationInMs;
@property (nonatomic) char hasPromptVisibilityDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDictationEnabled;
- (void)deleteIsLearnMoreButtonClicked;
- (void)deletePromptVisibilityDurationInMs;
- (id)suppressMessageUnderConditions;

@end
