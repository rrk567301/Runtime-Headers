@class NSData;

@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage {
    struct { unsigned char sourceLocale : 1; unsigned char targetLocale : 1; } _has;
}

@property (nonatomic) int sourceLocale;
@property (nonatomic) char hasSourceLocale;
@property (nonatomic) int targetLocale;
@property (nonatomic) char hasTargetLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSourceLocale;
- (void)deleteTargetLocale;
- (id)suppressMessageUnderConditions;

@end
