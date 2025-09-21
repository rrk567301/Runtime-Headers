@class NSString;

@interface ATXMagicalMomentsPBMMEngagedTracker : PBCodable <NSCopying> {
    struct { unsigned char anchor : 1; } _has;
}

@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) int anchor;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)anchorAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsAnchor:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
