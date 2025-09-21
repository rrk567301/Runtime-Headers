@class NSString, NSData;

@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage {
    struct { unsigned char environment : 1; } _has;
}

@property (copy, nonatomic) NSString *contextName;
@property (nonatomic) char hasContextName;
@property (nonatomic) int environment;
@property (nonatomic) char hasEnvironment;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContextName;
- (void)deleteEnvironment;
- (id)suppressMessageUnderConditions;

@end
