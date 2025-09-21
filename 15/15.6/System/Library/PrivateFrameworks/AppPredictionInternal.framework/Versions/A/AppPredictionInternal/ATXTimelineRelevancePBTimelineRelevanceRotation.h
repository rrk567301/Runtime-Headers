@interface ATXTimelineRelevancePBTimelineRelevanceRotation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char clientModelId : 1; unsigned char engagement : 1; unsigned char rotationEventType : 1; unsigned char isMediumOrHighConfidence : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) char hasRotationEventType;
@property (nonatomic) int rotationEventType;
@property (nonatomic) char hasIsMediumOrHighConfidence;
@property (nonatomic) char isMediumOrHighConfidence;
@property (nonatomic) char hasClientModelId;
@property (nonatomic) int clientModelId;
@property (nonatomic) char hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) char hasEngagement;
@property (nonatomic) int engagement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsClientModelId:(id)a0;
- (int)StringAsEngagement:(id)a0;
- (int)StringAsRotationEventType:(id)a0;
- (id)clientModelIdAsString:(int)a0;
- (id)engagementAsString:(int)a0;
- (id)rotationEventTypeAsString:(int)a0;

@end
