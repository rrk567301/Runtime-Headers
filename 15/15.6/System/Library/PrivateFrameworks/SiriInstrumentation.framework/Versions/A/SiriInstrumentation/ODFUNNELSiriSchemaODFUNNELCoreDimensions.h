@class NSString, SISchemaISOLocale, NSData;

@interface ODFUNNELSiriSchemaODFUNNELCoreDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewInterface : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (nonatomic) int viewInterface;
@property (nonatomic) char hasViewInterface;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;
- (id)suppressMessageUnderConditions;

@end
