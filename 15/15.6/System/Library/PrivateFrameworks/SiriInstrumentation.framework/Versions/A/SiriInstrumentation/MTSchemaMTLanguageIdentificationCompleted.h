@class NSArray, NSData;

@interface MTSchemaMTLanguageIdentificationCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char inputSource : 1; unsigned char topLocale : 1; } _has;
}

@property (nonatomic) int inputSource;
@property (nonatomic) char hasInputSource;
@property (nonatomic) int topLocale;
@property (nonatomic) char hasTopLocale;
@property (copy, nonatomic) NSArray *lidConfidences;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTopLocale;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addLidConfidence:(id)a0;
- (void)clearLidConfidence;
- (void)deleteInputSource;
- (void)deleteLidConfidence;
- (id)lidConfidenceAtIndex:(unsigned long long)a0;
- (unsigned long long)lidConfidenceCount;
- (id)suppressMessageUnderConditions;

@end
