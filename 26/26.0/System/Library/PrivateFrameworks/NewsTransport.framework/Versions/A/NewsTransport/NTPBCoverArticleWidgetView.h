@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {
    struct { unsigned char coverArticleWidgetArticleCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoverArticleWidgetViewingSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetViewingSessionId;
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
