@class NSData;

@interface MTSchemaMTLanguageIdentificationConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char confidenceInThousands : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) unsigned int confidenceInThousands;
@property (nonatomic) char hasConfidenceInThousands;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidenceInThousands;
- (void)deleteLocale;
- (id)suppressMessageUnderConditions;

@end
