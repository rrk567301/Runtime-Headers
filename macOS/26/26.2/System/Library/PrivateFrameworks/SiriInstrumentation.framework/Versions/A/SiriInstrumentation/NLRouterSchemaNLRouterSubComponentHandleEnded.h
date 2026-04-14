@class NSData, NLRouterSchemaNLRouterSubComponentHandleEndedData;

@interface NLRouterSchemaNLRouterSubComponentHandleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleEndedData *nlRouterSubComponentHandleEndedData;
@property (nonatomic) BOOL hasNlRouterSubComponentHandleEndedData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteExists;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteNlRouterSubComponentHandleEndedData;

@end
