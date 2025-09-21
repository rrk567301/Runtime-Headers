@class _MRLyricsTokenProtobuf;

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char endTime : 1; unsigned char startTime : 1; } _has;
}

@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasEndTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) _MRLyricsTokenProtobuf *token;

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

@end
