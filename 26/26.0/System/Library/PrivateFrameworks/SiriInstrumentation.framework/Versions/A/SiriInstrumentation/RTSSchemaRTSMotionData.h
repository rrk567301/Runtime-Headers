@class NSArray, NSData;

@interface RTSSchemaRTSMotionData : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *accelerationDatas;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accelerationDataAtIndex:(unsigned long long)a0;
- (unsigned long long)accelerationDataCount;
- (void)addAccelerationData:(id)a0;
- (void)clearAccelerationData;
- (void)deleteAccelerationData;

@end
