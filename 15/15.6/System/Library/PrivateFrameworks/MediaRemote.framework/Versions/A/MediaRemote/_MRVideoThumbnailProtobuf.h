@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {
    struct { unsigned char time : 1; } _has;
}

@property (readonly, nonatomic) char hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) char hasTime;
@property (nonatomic) double time;

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
