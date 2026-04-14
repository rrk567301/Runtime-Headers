@class NSData;

@interface ODDSiriSchemaODDDeviceSegment : SISchemaInstrumentationMessage {
    struct { unsigned char segmentType : 1; unsigned char segmentDataAvailabilityState : 1; } _has;
}

@property (nonatomic) int segmentType;
@property (nonatomic) BOOL hasSegmentType;
@property (nonatomic) int segmentDataAvailabilityState;
@property (nonatomic) BOOL hasSegmentDataAvailabilityState;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSegmentDataAvailabilityState;
- (void)deleteSegmentType;

@end
