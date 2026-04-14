@class NSData;

@interface SISchemaUEIDictationEnablementPromptShown : SISchemaInstrumentationMessage {
    struct { unsigned char isDictationEnabled : 1; unsigned char isLearnMoreButtonClicked : 1; unsigned char promptVisibilityDurationInMs : 1; } _has;
}

@property (nonatomic) BOOL isDictationEnabled;
@property (nonatomic) BOOL hasIsDictationEnabled;
@property (nonatomic) BOOL isLearnMoreButtonClicked;
@property (nonatomic) BOOL hasIsLearnMoreButtonClicked;
@property (nonatomic) long long promptVisibilityDurationInMs;
@property (nonatomic) BOOL hasPromptVisibilityDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsDictationEnabled;
- (void)deleteIsLearnMoreButtonClicked;
- (void)deletePromptVisibilityDurationInMs;

@end
