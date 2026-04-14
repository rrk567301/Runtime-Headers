@class NSData;

@interface ASRSchemaASRAppLanguageModelLoadStarted : SISchemaInstrumentationMessage {
    struct { unsigned char modelLocale : 1; } _has;
}

@property (nonatomic) int modelLocale;
@property (nonatomic) BOOL hasModelLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteModelLocale;

@end
