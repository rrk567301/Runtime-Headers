@class NSString;

@interface ATXMPBAnchorModelPhaseFilterTracker : PBCodable <NSCopying> {
    struct { unsigned char numEndingCandidates : 1; unsigned char numStartingCandidates : 1; unsigned char phaseDescription : 1; } _has;
}

@property (nonatomic) char hasPhaseDescription;
@property (nonatomic) int phaseDescription;
@property (readonly, nonatomic) char hasPhaseType;
@property (retain, nonatomic) NSString *phaseType;
@property (nonatomic) char hasNumStartingCandidates;
@property (nonatomic) unsigned int numStartingCandidates;
@property (nonatomic) char hasNumEndingCandidates;
@property (nonatomic) unsigned int numEndingCandidates;
@property (readonly, nonatomic) char hasAnchorType;
@property (retain, nonatomic) NSString *anchorType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsPhaseDescription:(id)a0;
- (id)phaseDescriptionAsString:(int)a0;

@end
