@class NSData;

@interface NLXSchemaCDMServiceStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceName : 1; } _has;
}

@property (nonatomic) int serviceName;
@property (nonatomic) char hasServiceName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteServiceName;
- (id)suppressMessageUnderConditions;

@end
