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

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsSpeechRecognizerCreated;
- (void)deleteCompilationDone;

@end
