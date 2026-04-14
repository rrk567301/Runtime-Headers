@class NSString;

@interface NTPBCohortMembership : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
