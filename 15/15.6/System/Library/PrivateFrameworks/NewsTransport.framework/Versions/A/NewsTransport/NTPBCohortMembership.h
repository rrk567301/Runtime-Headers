@class NSString;

@interface NTPBCohortMembership : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (readonly, nonatomic) char hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
