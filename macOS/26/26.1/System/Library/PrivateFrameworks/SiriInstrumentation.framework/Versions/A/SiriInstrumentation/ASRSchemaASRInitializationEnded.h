@class NSData;

@interface ASRSchemaASRInitializationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char compilationDone : 1; unsigned char isSpeechRecognizerCreated : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL compilationDone;
@property (nonatomic) BOOL hasCompilationDone;
@property (nonatomic) BOOL isSpeechRecognizerCreated;
@property (nonatomic) BOOL hasIsSpeechRecognizerCreated;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsSpeechRecognizerCreated;
- (void)deleteCompilationDone;

@end
