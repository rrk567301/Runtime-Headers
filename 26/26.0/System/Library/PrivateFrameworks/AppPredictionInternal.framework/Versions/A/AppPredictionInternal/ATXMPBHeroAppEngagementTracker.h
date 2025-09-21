@class NSString;

@interface ATXMPBHeroAppEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char interactionType : 1; } _has;
}

@property (nonatomic) BOOL hasInteractionType;
@property (nonatomic) int interactionType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsInteractionType:(id)a0;
- (id)interactionTypeAsString:(int)a0;

@end
