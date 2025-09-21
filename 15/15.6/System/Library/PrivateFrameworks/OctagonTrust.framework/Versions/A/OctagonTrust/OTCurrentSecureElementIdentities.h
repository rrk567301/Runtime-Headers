@class NSMutableArray, OTSecureElementPeerIdentity;

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *localPeerIdentity;
@property (retain, nonatomic) NSMutableArray *trustedPeerSecureElementIdentities;
@property (readonly, nonatomic) char hasPendingLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;

+ (Class)trustedPeerSecureElementIdentitiesType;

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
- (void)addTrustedPeerSecureElementIdentities:(id)a0;
- (void)clearTrustedPeerSecureElementIdentities;
- (id)trustedPeerSecureElementIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)trustedPeerSecureElementIdentitiesCount;

@end
