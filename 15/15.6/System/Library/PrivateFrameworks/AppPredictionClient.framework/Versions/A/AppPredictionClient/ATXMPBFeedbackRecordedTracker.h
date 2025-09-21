@class NSString;

@interface ATXMPBFeedbackRecordedTracker : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; } _has;
}

@property (nonatomic) char hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;

@end
