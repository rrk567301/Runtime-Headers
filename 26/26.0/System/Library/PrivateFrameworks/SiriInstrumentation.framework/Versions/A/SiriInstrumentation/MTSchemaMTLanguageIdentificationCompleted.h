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

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteTopLocale;
- (void)addLidConfidence:(id)a0;
- (void)clearLidConfidence;
- (void)deleteInputSource;
- (void)deleteLidConfidence;
- (id)lidConfidenceAtIndex:(unsigned long long)a0;
- (unsigned long long)lidConfidenceCount;

@end
