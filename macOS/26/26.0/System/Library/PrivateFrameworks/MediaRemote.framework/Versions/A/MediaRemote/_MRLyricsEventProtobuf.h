@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endTime : 1; unsigned char startTime : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
