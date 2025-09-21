@class NSData;

@interface PLUSSchemaPLUSRECTIFIPatternConstraint : SISchemaInstrumentationMessage {
    struct { unsigned char constraintType : 1; unsigned char constraintValue : 1; } _has;
}

@property (nonatomic) int constraintType;
@property (nonatomic) char hasConstraintType;
@property (nonatomic) float constraintValue;
@property (nonatomic) char hasConstraintValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConstraintType;
- (void)deleteConstraintValue;
- (id)suppressMessageUnderConditions;

@end
