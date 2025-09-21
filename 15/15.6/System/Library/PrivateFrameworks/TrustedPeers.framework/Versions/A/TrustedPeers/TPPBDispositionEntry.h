@class NSString, TPPBDisposition;

@interface TPPBDispositionEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) char hasDisposition;
@property (retain, nonatomic) TPPBDisposition *disposition;

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
