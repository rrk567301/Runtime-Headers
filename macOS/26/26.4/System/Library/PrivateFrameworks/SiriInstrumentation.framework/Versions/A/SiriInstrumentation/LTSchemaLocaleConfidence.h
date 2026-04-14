@class NSString, NSData;

@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidence;
- (void)deleteLocale;

@end
