@class NSData;

@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage {
    struct { unsigned char sourceLocale : 1; unsigned char targetLocale : 1; } _has;
}

@property (nonatomic) int sourceLocale;
@property (nonatomic) BOOL hasSourceLocale;
@property (nonatomic) int targetLocale;
@property (nonatomic) BOOL hasTargetLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteSourceLocale;
- (void)deleteTargetLocale;

@end
