@class NSData;

@interface NLXSchemaCDMSpanMatcherStarted : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteName;

@end
