@class NSString;

@interface ATXMPBBlendingClientModelEngagementUICacheAgeTracker : PBCodable <NSCopying> {
    struct { unsigned char outcomeType : 1; } _has;
}

@property (nonatomic) char hasOutcomeType;
@property (nonatomic) int outcomeType;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsOutcomeType:(id)a0;
- (id)outcomeTypeAsString:(int)a0;

@end
