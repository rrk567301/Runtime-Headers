@class NSString;

@interface BMPBPOICategoryEvent : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSince1970 : 1; unsigned char rank : 1; } _has;
}

@property (readonly, nonatomic) char hasPoiCategory;
@property (retain, nonatomic) NSString *poiCategory;
@property (nonatomic) char hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) char hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
