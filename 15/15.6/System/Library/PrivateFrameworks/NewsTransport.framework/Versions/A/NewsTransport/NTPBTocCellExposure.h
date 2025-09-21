@class NSData, NTPBTocCellExposureArticleElement, NTPBFeedCellExposure;

@interface NTPBTocCellExposure : PBCodable <NSCopying> {
    struct { unsigned char displayRank : 1; unsigned char rankInSection : 1; unsigned char tocCellSection : 1; unsigned char type : 1; unsigned char isBadged : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasTocCellExposureId;
@property (retain, nonatomic) NSData *tocCellExposureId;
@property (nonatomic) char hasIsBadged;
@property (nonatomic) char isBadged;
@property (nonatomic) char hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) char hasRankInSection;
@property (nonatomic) int rankInSection;
@property (nonatomic) char hasTocCellSection;
@property (nonatomic) int tocCellSection;
@property (readonly, nonatomic) char hasFeedCellExposure;
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure;
@property (readonly, nonatomic) char hasTocCellExposureArticleElement;
@property (retain, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTocCellSection:(id)a0;
- (id)tocCellSectionAsString:(int)a0;

@end
