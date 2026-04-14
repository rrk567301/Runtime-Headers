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

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteTopLocale;
- (void)addLidConfidence:(id)a0;
- (void)clearLidConfidence;
- (void)deleteInputSource;
- (void)deleteLidConfidence;
- (id)lidConfidenceAtIndex:(unsigned long long)a0;
- (unsigned long long)lidConfidenceCount;

@end
