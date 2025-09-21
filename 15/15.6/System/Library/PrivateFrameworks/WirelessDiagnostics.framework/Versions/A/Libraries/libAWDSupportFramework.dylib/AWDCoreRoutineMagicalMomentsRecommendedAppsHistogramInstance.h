@class NSString;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char rank : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasRank;
@property (nonatomic) int rank;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
