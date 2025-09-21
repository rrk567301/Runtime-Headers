@class NSData;

@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {
    struct { unsigned char alwaysShowUserSpeechTranscript : 1; unsigned char alwaysBlurBackground : 1; unsigned char alwaysShowSiriDialog : 1; } _has;
}

@property (nonatomic) char alwaysShowUserSpeechTranscript;
@property (nonatomic) char hasAlwaysShowUserSpeechTranscript;
@property (nonatomic) char alwaysBlurBackground;
@property (nonatomic) char hasAlwaysBlurBackground;
@property (nonatomic) char alwaysShowSiriDialog;
@property (nonatomic) char hasAlwaysShowSiriDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlwaysBlurBackground;
- (void)deleteAlwaysShowSiriDialog;
- (void)deleteAlwaysShowUserSpeechTranscript;
- (id)suppressMessageUnderConditions;

@end
