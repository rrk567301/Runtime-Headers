@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKeyId;
@property (readonly, nonatomic) char hasWrappingKey;
@property (retain, nonatomic) NSData *wrappingKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
