@class NSString;

@interface ATXMPBAppClipSessionEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char interactionType : 1; } _has;
}

@property (nonatomic) char hasInteractionType;
@property (nonatomic) int interactionType;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

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
- (int)StringAsInteractionType:(id)a0;
- (id)interactionTypeAsString:(int)a0;

@end
