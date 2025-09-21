@interface NTPBVideoGroupsConfig : PBCodable <NSCopying> {
    struct { unsigned char moreFromPublisherBarTime : 1; unsigned char moreVideosGroupMaxNumberOfVideos : 1; unsigned char moreVideosGroupMinNumberOfVideos : 1; unsigned char nowPlayingBarTime : 1; unsigned char upNextBarTime : 1; unsigned char moreVideosGroupFilterOption : 1; unsigned char moreVideosGroupSortOption : 1; unsigned char moreFromPublisherBarEnabled : 1; unsigned char playsMutedByDefault : 1; } _has;
}

@property (nonatomic) char hasPlaysMutedByDefault;
@property (nonatomic) char playsMutedByDefault;
@property (nonatomic) char hasNowPlayingBarTime;
@property (nonatomic) long long nowPlayingBarTime;
@property (nonatomic) char hasUpNextBarTime;
@property (nonatomic) long long upNextBarTime;
@property (nonatomic) char hasMoreFromPublisherBarTime;
@property (nonatomic) long long moreFromPublisherBarTime;
@property (nonatomic) char hasMoreFromPublisherBarEnabled;
@property (nonatomic) char moreFromPublisherBarEnabled;
@property (nonatomic) char hasMoreVideosGroupSortOption;
@property (nonatomic) int moreVideosGroupSortOption;
@property (nonatomic) char hasMoreVideosGroupFilterOption;
@property (nonatomic) int moreVideosGroupFilterOption;
@property (nonatomic) char hasMoreVideosGroupMinNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMinNumberOfVideos;
@property (nonatomic) char hasMoreVideosGroupMaxNumberOfVideos;
@property (nonatomic) long long moreVideosGroupMaxNumberOfVideos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
