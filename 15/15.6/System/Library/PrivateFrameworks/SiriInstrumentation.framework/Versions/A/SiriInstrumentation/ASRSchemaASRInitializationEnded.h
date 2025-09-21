@class NSData;

@interface ASRSchemaASRInitializationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char compilationDone : 1; unsigned char isSpeechRecognizerCreated : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) char compilationDone;
@property (nonatomic) char hasCompilationDone;
@property (nonatomic) char isSpeechRecognizerCreated;
@property (nonatomic) char hasIsSpeechRecognizerCreated;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSpeechRecognizerCreated;
- (void)deleteCompilationDone;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
