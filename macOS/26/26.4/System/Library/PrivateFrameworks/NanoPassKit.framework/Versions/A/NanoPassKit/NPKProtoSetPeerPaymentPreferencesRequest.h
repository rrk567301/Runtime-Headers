@class NSData;

@interface NPKProtoSetPeerPaymentPreferencesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerPaymentPreferencesData;
@property (retain, nonatomic) NSData *peerPaymentPreferencesData;

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
