@class NSData;

@interface ODDSiriSchemaODDTimeInterval : SISchemaInstrumentationMessage {
    struct { unsigned char startTimestampInSecondsSince1970 : 1; unsigned char numberOfSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long startTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasStartTimestampInSecondsSince1970;
@property (nonatomic) unsigned int numberOfSeconds;
@property (nonatomic) BOOL hasNumberOfSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteNumberOfSeconds;
- (void)deleteStartTimestampInSecondsSince1970;

@end
