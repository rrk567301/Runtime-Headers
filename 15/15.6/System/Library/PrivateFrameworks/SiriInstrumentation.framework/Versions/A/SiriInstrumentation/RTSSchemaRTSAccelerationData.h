@class NSData;

@interface RTSSchemaRTSAccelerationData : SISchemaInstrumentationMessage {
    struct { unsigned char xAcceleration : 1; unsigned char yAcceleration : 1; unsigned char zAcceleration : 1; } _has;
}

@property (nonatomic) double xAcceleration;
@property (nonatomic) char hasXAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) char hasYAcceleration;
@property (nonatomic) double zAcceleration;
@property (nonatomic) char hasZAcceleration;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteXAcceleration;
- (void)deleteYAcceleration;
- (void)deleteZAcceleration;
- (id)suppressMessageUnderConditions;

@end
