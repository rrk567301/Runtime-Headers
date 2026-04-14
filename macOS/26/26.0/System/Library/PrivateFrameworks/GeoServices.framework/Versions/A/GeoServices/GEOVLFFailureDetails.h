@class PBUnknownFields;

@interface GEOVLFFailureDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _failureReason;
    struct { unsigned char has_failureReason : 1; } _flags;
}

@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsFailureReason:(id)a0;
- (id)failureReasonAsString:(int)a0;

@end
