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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsInteractionType:(id)a0;
- (id)interactionTypeAsString:(int)a0;

@end
