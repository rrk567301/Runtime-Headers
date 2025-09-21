@class NSData, NSString;

@interface NTPBTocReorder : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; unsigned char tocNewIndex : 1; unsigned char tocOldIndex : 1; } _has;
}

@property (readonly, nonatomic) char hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;
@property (nonatomic) char hasTocOldIndex;
@property (nonatomic) int tocOldIndex;
@property (nonatomic) char hasTocNewIndex;
@property (nonatomic) int tocNewIndex;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;

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
