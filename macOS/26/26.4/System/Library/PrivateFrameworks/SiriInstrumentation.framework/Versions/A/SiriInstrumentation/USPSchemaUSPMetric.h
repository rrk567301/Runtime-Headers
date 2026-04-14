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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
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

@end
