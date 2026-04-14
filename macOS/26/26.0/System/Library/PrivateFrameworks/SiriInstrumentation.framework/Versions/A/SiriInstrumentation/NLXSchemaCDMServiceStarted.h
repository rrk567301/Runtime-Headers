@class NSData;

@interface NLXSchemaCDMServiceStarted : SISchemaInstrumentationMessage {
    struct { unsigned char serviceName : 1; } _has;
}

@property (nonatomic) int serviceName;
@property (nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteServiceName;

@end
