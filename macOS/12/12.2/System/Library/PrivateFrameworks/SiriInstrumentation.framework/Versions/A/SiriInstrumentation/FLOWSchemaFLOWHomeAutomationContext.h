@class NSArray, NSData, FLOWSchemaFLOWHomeAutomationCommand, FLOWSchemaFLOWHomeContext;

@interface FLOWSchemaFLOWHomeAutomationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *homeKitServiceResponses;
@property (retain, nonatomic) FLOWSchemaFLOWHomeContext *homeContext;
@property (nonatomic) BOOL hasHomeContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationCommand *homeAutomationCommand;
@property (nonatomic) BOOL hasHomeAutomationCommand;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addHomeKitServiceResponse:(id)a0;
- (void)clearHomeKitServiceResponse;
- (unsigned long long)homeKitServiceResponseCount;
- (id)homeKitServiceResponseAtIndex:(unsigned long long)a0;

@end
