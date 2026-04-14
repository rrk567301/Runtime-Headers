@class NSMutableArray, OTSecureElementPeerIdentity;

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *localPeerIdentity;
@property (retain, nonatomic) NSMutableArray *trustedPeerSecureElementIdentities;
@property (readonly, nonatomic) BOOL hasPendingLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;

+ (Class)trustedPeerSecureElementIdentitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearTrustedPeerSecureElementIdentities;
- (void)addTrustedPeerSecureElementIdentities:(id)a0;
- (unsigned long long)trustedPeerSecureElementIdentitiesCount;
- (id)trustedPeerSecureElementIdentitiesAtIndex:(unsigned long long)a0;

@end
