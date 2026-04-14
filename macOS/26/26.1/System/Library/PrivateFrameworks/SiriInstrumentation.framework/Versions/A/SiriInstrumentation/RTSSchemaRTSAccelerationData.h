@class NSData;

@interface RTSSchemaRTSAccelerationData : SISchemaInstrumentationMessage {
    struct { unsigned char xAcceleration : 1; unsigned char yAcceleration : 1; unsigned char zAcceleration : 1; } _has;
}

@property (nonatomic) double xAcceleration;
@property (nonatomic) BOOL hasXAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) BOOL hasYAcceleration;
@property (nonatomic) double zAcceleration;
@property (nonatomic) BOOL hasZAcceleration;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteXAcceleration;
- (void)deleteYAcceleration;
- (void)deleteZAcceleration;

@end
