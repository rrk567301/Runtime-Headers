@class NSString, SISchemaISOLocale, NSData;

@interface ODFUNNELSiriSchemaODFUNNELCoreDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewInterface : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
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
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;

@end
