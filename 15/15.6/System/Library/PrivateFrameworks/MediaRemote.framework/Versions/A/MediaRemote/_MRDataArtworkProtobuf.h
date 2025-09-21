@class NSString, NSData;

@interface _MRDataArtworkProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasImageData;
@property (retain, nonatomic) NSData *imageData;

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
