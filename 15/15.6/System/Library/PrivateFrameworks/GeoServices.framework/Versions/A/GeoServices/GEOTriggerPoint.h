@class PBUnknownFields;

@interface GEOTriggerPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _referenceOffsetCm;
    unsigned int _time;
    char _allowsShifting;
    char _countBeforeReferenceOffset;
    struct { unsigned char has_referenceOffsetCm : 1; unsigned char has_time : 1; unsigned char has_allowsShifting : 1; unsigned char has_countBeforeReferenceOffset : 1; } _flags;
}

@property (nonatomic) char hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic) char hasReferenceOffsetCm;
@property (nonatomic) unsigned int referenceOffsetCm;
@property (nonatomic) char hasCountBeforeReferenceOffset;
@property (nonatomic) char countBeforeReferenceOffset;
@property (nonatomic) char hasAllowsShifting;
@property (nonatomic) char allowsShifting;
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
