@class NSData;

@interface FLOWSchemaFLOWLanguageConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char languageCode : 1; unsigned char confidenceScore : 1; } _has;
}

@property (nonatomic) int languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) unsigned long long confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteConfidenceScore;
- (void)deleteLanguageCode;

@end
