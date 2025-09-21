@class PBUnknownFields;

@interface GEOLogMsgEventId : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _high;
    unsigned long long _low;
    unsigned int _deanonymizeId;
    char _isPaidAccount;
    struct { unsigned char has_high : 1; unsigned char has_low : 1; unsigned char has_deanonymizeId : 1; unsigned char has_isPaidAccount : 1; } _flags;
}

@property (nonatomic) char hasHigh;
@property (nonatomic) unsigned long long high;
@property (nonatomic) char hasLow;
@property (nonatomic) unsigned long long low;
@property (nonatomic) char hasDeanonymizeId;
@property (nonatomic) unsigned int deanonymizeId;
@property (nonatomic) char hasIsPaidAccount;
@property (nonatomic) char isPaidAccount;
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
