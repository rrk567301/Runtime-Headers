@class NSString, NSData;

@interface NTPBFeedCellExposure : PBCodable <NSCopying> {
    struct { unsigned char displayRankInSection : 1; unsigned char feedCellHostType : 1; unsigned char feedCellSection : 1; unsigned char feedType : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) char hasIsUserSubscribedToFeed;
@property (nonatomic) char isUserSubscribedToFeed;
@property (nonatomic) char hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) char hasDisplayRankInSection;
@property (nonatomic) int displayRankInSection;
@property (readonly, nonatomic) char hasViewFrameInScreen;
@property (retain, nonatomic) NSString *viewFrameInScreen;
@property (nonatomic) char hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (readonly, nonatomic) char hasFeedCellHostExposureId;
@property (retain, nonatomic) NSData *feedCellHostExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedCellSection:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (id)feedCellHostTypeAsString:(int)a0;
- (id)feedCellSectionAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;

@end
