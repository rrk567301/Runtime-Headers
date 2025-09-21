@class NSString, NSData, NTPBDate;

@interface NTPBAVAssetKey : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasKeyData;
@property (retain, nonatomic) NSData *keyData;
@property (readonly, nonatomic) char hasCreatedAt;
@property (retain, nonatomic) NTPBDate *createdAt;
@property (readonly, nonatomic) char hasExpiresAt;
@property (retain, nonatomic) NTPBDate *expiresAt;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
