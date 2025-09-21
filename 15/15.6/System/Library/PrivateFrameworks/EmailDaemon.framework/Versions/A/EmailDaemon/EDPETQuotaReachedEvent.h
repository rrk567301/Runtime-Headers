@interface EDPETQuotaReachedEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    struct { unsigned char droppedEventsCount : 1; unsigned char timestamp : 1; unsigned char sequenceNumber : 1; unsigned char timezoneOffset : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) char hasDroppedEventsCount;
@property (nonatomic) unsigned long long droppedEventsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)messageFrameType;

@end
