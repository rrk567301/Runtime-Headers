@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosTitle;
@property (retain, nonatomic) NSString *discoverMoreVideosTitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosSubtitle;
@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosUrl;
@property (retain, nonatomic) NSString *discoverMoreVideosUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
