@class NSMutableArray, OTSecureElementPeerIdentity;

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *localPeerIdentity;
@property (retain, nonatomic) NSMutableArray *trustedPeerSecureElementIdentities;
@property (readonly, nonatomic) BOOL hasPendingLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *pendingLocalPeerIdentity;

+ (Class)trustedPeerSecureElementIdentitiesType;

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
- (void)addTrustedPeerSecureElementIdentities:(id)a0;
- (void)clearTrustedPeerSecureElementIdentities;
- (id)trustedPeerSecureElementIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)trustedPeerSecureElementIdentitiesCount;

@end
