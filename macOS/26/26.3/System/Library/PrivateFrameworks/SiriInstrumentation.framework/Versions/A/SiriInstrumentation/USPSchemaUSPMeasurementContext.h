@class NSString, NSData;

@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage {
    struct { unsigned char environment : 1; } _has;
}

@property (copy, nonatomic) NSString *contextName;
@property (nonatomic) BOOL hasContextName;
@property (nonatomic) int environment;
@property (nonatomic) BOOL hasEnvironment;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)deleteEnvironment;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteContextName;

@end
