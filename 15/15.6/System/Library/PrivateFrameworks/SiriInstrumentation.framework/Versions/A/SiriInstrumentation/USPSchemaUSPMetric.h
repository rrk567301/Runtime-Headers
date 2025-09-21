@class NSString, NSArray, NSData;

@interface USPSchemaUSPMetric : SISchemaInstrumentationMessage {
    struct { unsigned char value : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (copy, nonatomic) NSString *unit;
@property (nonatomic) char hasUnit;
@property (nonatomic) double value;
@property (nonatomic) char hasValue;
@property (copy, nonatomic) NSArray *iterationValues;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addIterationValues:(double)a0;
- (void)clearIterationValues;
- (void)deleteIterationValues;
- (void)deleteName;
- (void)deleteUnit;
- (void)deleteValue;
- (double)iterationValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)iterationValuesCount;
- (id)suppressMessageUnderConditions;

@end
