@class NSString;

@interface NTPBFeedLoad : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; } _has;
}

@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSString *feedViewExposureId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
