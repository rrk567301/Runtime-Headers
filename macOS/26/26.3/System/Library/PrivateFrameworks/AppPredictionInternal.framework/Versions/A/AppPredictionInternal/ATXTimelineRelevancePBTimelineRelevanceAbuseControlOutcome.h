@interface ATXTimelineRelevancePBTimelineRelevanceAbuseControlOutcome : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char outcomeType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasOutcomeType;
@property (nonatomic) int outcomeType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsOutcomeType:(id)a0;
- (id)outcomeTypeAsString:(int)a0;

@end
