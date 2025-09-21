@class NSString;

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char horizontalAccuracy : 1; unsigned char locationType : 1; unsigned char qualityIndicator : 1; unsigned char triggerTypes : 1; unsigned char userAssistanceRequired : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) char hasTriggerTypes;
@property (nonatomic) int triggerTypes;
@property (nonatomic) char hasUserAssistanceRequired;
@property (nonatomic) char userAssistanceRequired;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) char hasQualityIndicator;
@property (nonatomic) int qualityIndicator;
@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
