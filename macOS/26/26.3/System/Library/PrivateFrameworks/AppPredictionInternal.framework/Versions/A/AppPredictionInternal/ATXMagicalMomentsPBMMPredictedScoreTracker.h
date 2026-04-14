@class NSString;

@interface ATXMagicalMomentsPBMMPredictedScoreTracker : PBCodable <NSCopying> {
    struct { unsigned char anchor : 1; } _has;
}

@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) int anchor;
@property (readonly, nonatomic) BOOL hasTopBundleId;
@property (retain, nonatomic) NSString *topBundleId;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)anchorAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsAnchor:(id)a0;

@end
