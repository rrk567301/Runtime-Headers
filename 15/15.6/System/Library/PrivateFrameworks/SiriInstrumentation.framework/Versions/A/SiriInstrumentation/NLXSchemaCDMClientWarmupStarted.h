@class NSData;

@interface NLXSchemaCDMClientWarmupStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceGraphName : 1; } _has;
}

@property (nonatomic) int serviceGraphName;
@property (nonatomic) char hasServiceGraphName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteServiceGraphName;
- (id)suppressMessageUnderConditions;

@end
