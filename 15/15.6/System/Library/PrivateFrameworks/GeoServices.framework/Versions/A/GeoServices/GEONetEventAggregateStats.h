@class PBUnknownFields;

@interface GEONetEventAggregateStats : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _algMean;
    unsigned long long _max;
    unsigned long long _min;
    unsigned long long _p10;
    unsigned long long _p25;
    unsigned long long _p50;
    unsigned long long _p75;
    unsigned long long _p90;
    unsigned long long _p99;
    struct { unsigned char has_algMean : 1; unsigned char has_max : 1; unsigned char has_min : 1; unsigned char has_p10 : 1; unsigned char has_p25 : 1; unsigned char has_p50 : 1; unsigned char has_p75 : 1; unsigned char has_p90 : 1; unsigned char has_p99 : 1; } _flags;
}

@property (nonatomic) char hasMin;
@property (nonatomic) unsigned long long min;
@property (nonatomic) char hasMax;
@property (nonatomic) unsigned long long max;
@property (nonatomic) char hasP10;
@property (nonatomic) unsigned long long p10;
@property (nonatomic) char hasP25;
@property (nonatomic) unsigned long long p25;
@property (nonatomic) char hasP50;
@property (nonatomic) unsigned long long p50;
@property (nonatomic) char hasP75;
@property (nonatomic) unsigned long long p75;
@property (nonatomic) char hasP90;
@property (nonatomic) unsigned long long p90;
@property (nonatomic) char hasP99;
@property (nonatomic) unsigned long long p99;
@property (nonatomic) char hasAlgMean;
@property (nonatomic) unsigned long long algMean;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
