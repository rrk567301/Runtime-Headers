@class NSData;

@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying> {
    struct { unsigned char coverArticleWidgetArticleCount : 1; } _has;
}

@property (readonly, nonatomic) char hasCoverArticleWidgetExposureSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetExposureSessionId;
@property (nonatomic) char hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
