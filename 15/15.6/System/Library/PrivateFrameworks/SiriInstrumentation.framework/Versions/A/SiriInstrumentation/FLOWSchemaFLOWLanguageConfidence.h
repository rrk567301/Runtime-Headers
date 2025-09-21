@class NSData;

@interface FLOWSchemaFLOWLanguageConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char languageCode : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) int languageCode;
@property (nonatomic) char hasLanguageCode;
@property (nonatomic) unsigned long long confidenceScore;
@property (nonatomic) char hasConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidenceScore;
- (void)deleteLanguageCode;
- (id)suppressMessageUnderConditions;

@end
