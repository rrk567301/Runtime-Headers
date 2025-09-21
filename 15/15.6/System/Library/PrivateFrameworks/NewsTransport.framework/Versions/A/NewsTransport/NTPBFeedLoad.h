@class NSString;

@interface NTPBFeedLoad : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; } _has;
}

@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSString *feedViewExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
