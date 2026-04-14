@class NSString, NSArray, NSData;

@interface USPSchemaUSPMetric : SISchemaInstrumentationMessage {
    struct { unsigned char value : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *unit;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSArray *iterationValues;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteName;
- (void)deleteValue;
- (void)deleteUnit;
- (void)clearIterationValues;
- (void)deleteIterationValues;
- (void)addIterationValues:(double)a0;
- (unsigned long long)iterationValuesCount;
- (double)iterationValuesAtIndex:(unsigned long long)a0;

@end
