@class NSArray, NSData;

@interface ODDSiriSchemaODDDictationProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isDictationEnabled : 1; unsigned char isAutoPunctuationEnabled : 1; } _has;
}

@property (nonatomic) BOOL isDictationEnabled;
@property (nonatomic) BOOL hasIsDictationEnabled;
@property (copy, nonatomic) NSArray *enabledDictationLocales;
@property (nonatomic) BOOL isAutoPunctuationEnabled;
@property (nonatomic) BOOL hasIsAutoPunctuationEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)enabledDictationLocalesAtIndex:(unsigned long long)a0;
- (void)addEnabledDictationLocales:(id)a0;
- (void)clearEnabledDictationLocales;
- (void)deleteEnabledDictationLocales;
- (void)deleteIsAutoPunctuationEnabled;
- (void)deleteIsDictationEnabled;
- (unsigned long long)enabledDictationLocalesCount;

@end
