@class NSData, CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted, CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
