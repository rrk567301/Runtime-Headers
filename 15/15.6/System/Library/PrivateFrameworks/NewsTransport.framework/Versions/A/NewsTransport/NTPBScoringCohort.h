@class NSString;

@interface NTPBScoringCohort : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char impressions : 1; unsigned char rawClicks : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) char hasRawClicks;
@property (nonatomic) double rawClicks;
@property (nonatomic) char hasImpressions;
@property (nonatomic) double impressions;

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
