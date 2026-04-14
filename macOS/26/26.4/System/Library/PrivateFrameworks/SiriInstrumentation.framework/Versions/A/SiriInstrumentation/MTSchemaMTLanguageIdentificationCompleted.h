@class NSArray, NSData;

@interface MTSchemaMTLanguageIdentificationCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char inputSource : 1; unsigned char topLocale : 1; } _has;
}

@property (nonatomic) int inputSource;
@property (nonatomic) BOOL hasInputSource;
@property (nonatomic) int topLocale;
@property (nonatomic) BOOL hasTopLocale;
@property (copy, nonatomic) NSArray *lidConfidences;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTopLocale;
- (void)addLidConfidence:(id)a0;
- (void)clearLidConfidence;
- (void)deleteInputSource;
- (void)deleteLidConfidence;
- (id)lidConfidenceAtIndex:(unsigned long long)a0;
- (unsigned long long)lidConfidenceCount;

@end
