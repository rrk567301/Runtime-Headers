@class PBUnknownFields;

@interface GEOLogMsgEventPOIPredictionData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _confidence;
    unsigned long long _muid;
    struct { unsigned char has_confidence : 1; unsigned char has_muid : 1; } _flags;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
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
