@class NSData;

@interface QDSchemaQDTuplesGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfTuples : 1; unsigned char maximumTupleWidth : 1; unsigned char wasToolTupleLimitReached : 1; } _has;
}

@property (nonatomic) unsigned int numberOfTuples;
@property (nonatomic) char hasNumberOfTuples;
@property (nonatomic) unsigned int maximumTupleWidth;
@property (nonatomic) char hasMaximumTupleWidth;
@property (nonatomic) char wasToolTupleLimitReached;
@property (nonatomic) char hasWasToolTupleLimitReached;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMaximumTupleWidth;
- (void)deleteNumberOfTuples;
- (void)deleteWasToolTupleLimitReached;
- (id)suppressMessageUnderConditions;

@end
