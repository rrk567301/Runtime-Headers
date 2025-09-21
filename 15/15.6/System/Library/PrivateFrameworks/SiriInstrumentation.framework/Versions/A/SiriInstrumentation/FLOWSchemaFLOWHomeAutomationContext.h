@class NSArray, NSData, FLOWSchemaFLOWHomeAutomationCommand, FLOWSchemaFLOWHomeContext;

@interface FLOWSchemaFLOWHomeAutomationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *homeKitServiceResponses;
@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic) char hasHomeContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationCommand *homeAutomationCommand;
@property (nonatomic) char hasHomeAutomationCommand;
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
- (void)addHomeKitServiceResponse:(id)a0;
- (void)clearHomeKitServiceResponse;
- (void)deleteHomeAutomationCommand;
- (void)deleteHomeContext;
- (void)deleteHomeKitServiceResponse;
- (id)homeKitServiceResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitServiceResponseCount;
- (id)suppressMessageUnderConditions;

@end
