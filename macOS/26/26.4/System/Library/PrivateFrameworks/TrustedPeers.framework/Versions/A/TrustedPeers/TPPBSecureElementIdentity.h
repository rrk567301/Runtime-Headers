@class NSData;

@interface TPPBSecureElementIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerIdentifier;
@property (retain, nonatomic) NSData *peerIdentifier;
@property (readonly, nonatomic) BOOL hasPeerData;
@property (retain, nonatomic) NSData *peerData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
