@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKeyId;
@property (readonly, nonatomic) BOOL hasWrappingKey;
@property (retain, nonatomic) NSData *wrappingKey;

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
