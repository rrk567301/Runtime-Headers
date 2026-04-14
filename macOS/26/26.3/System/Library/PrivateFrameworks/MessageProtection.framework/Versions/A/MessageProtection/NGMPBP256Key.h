@class NSString, NSData;

@interface NGMPBP256Key : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKeychainTag;
@property (retain, nonatomic) NSString *keychainTag;
@property (nonatomic) int keystore;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSData *keyData;

- (id)keystoreAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsKeystore:(id)a0;

@end
