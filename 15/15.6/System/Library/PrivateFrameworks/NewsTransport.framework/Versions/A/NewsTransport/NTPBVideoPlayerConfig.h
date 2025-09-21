@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDiscoverMoreVideosTitle;
@property (retain, nonatomic) NSString *discoverMoreVideosTitle;
@property (readonly, nonatomic) char hasDiscoverMoreVideosSubtitle;
@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (readonly, nonatomic) char hasDiscoverMoreVideosUrl;
@property (retain, nonatomic) NSString *discoverMoreVideosUrl;

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
