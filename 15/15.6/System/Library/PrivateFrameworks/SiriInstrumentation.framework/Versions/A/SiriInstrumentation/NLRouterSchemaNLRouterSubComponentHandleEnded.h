@class NSData, NLRouterSchemaNLRouterSubComponentHandleEndedData;

@interface NLRouterSchemaNLRouterSubComponentHandleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) NLRouterSchemaNLRouterSubComponentHandleEndedData *nlRouterSubComponentHandleEndedData;
@property (nonatomic) char hasNlRouterSubComponentHandleEndedData;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExists;
- (void)deleteNlRouterSubComponentHandleEndedData;
- (id)suppressMessageUnderConditions;

@end
