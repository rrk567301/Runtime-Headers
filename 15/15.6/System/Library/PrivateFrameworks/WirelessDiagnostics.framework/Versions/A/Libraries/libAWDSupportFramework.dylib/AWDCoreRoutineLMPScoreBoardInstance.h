@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying> {
    struct { unsigned char corrects : 1; unsigned char incorrects : 1; unsigned char invalids : 1; unsigned char unknowns : 1; } _has;
}

@property (readonly, nonatomic) char hasKeyword;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) char hasCorrects;
@property (nonatomic) int corrects;
@property (nonatomic) char hasIncorrects;
@property (nonatomic) int incorrects;
@property (nonatomic) char hasUnknowns;
@property (nonatomic) int unknowns;
@property (nonatomic) char hasInvalids;
@property (nonatomic) int invalids;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
