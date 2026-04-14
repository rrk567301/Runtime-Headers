@class NSArray, NSData;

@interface RTSSchemaRTSMotionData : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *accelerationDatas;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)accelerationDataAtIndex:(unsigned long long)a0;
- (unsigned long long)accelerationDataCount;
- (void)addAccelerationData:(id)a0;
- (void)clearAccelerationData;
- (void)deleteAccelerationData;

@end
