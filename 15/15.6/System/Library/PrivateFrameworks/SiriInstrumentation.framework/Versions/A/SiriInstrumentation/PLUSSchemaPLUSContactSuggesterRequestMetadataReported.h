@class NSData;

@interface PLUSSchemaPLUSContactSuggesterRequestMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isPlusContactSuggesterEnabled : 1; unsigned char isForcePromptUsed : 1; } _has;
}

@property (nonatomic) char isPlusContactSuggesterEnabled;
@property (nonatomic) char hasIsPlusContactSuggesterEnabled;
@property (nonatomic) char isForcePromptUsed;
@property (nonatomic) char hasIsForcePromptUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsForcePromptUsed;
- (void)deleteIsPlusContactSuggesterEnabled;
- (id)suppressMessageUnderConditions;

@end
