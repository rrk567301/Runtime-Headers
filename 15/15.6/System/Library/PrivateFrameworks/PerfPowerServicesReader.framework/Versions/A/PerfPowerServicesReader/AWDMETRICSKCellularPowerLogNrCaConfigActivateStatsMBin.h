@interface AWDMETRICSKCellularPowerLogNrCaConfigActivateStatsMBin : PBCodable <NSCopying> {
    struct { unsigned char ccActivated : 1; unsigned char ccConfigured : 1; unsigned char direction : 1; unsigned char duration : 1; unsigned char freqRange : 1; unsigned char isEndc : 1; } _has;
}

@property (nonatomic) char hasCcConfigured;
@property (nonatomic) int ccConfigured;
@property (nonatomic) char hasCcActivated;
@property (nonatomic) int ccActivated;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) char hasIsEndc;
@property (nonatomic) char isEndc;
@property (nonatomic) char hasFreqRange;
@property (nonatomic) int freqRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDirection:(id)a0;
- (id)directionAsString:(int)a0;
- (int)StringAsCcConfigured:(id)a0;
- (int)StringAsCcActivated:(id)a0;
- (int)StringAsFreqRange:(id)a0;
- (id)ccActivatedAsString:(int)a0;
- (id)ccConfiguredAsString:(int)a0;
- (id)freqRangeAsString:(int)a0;

@end
