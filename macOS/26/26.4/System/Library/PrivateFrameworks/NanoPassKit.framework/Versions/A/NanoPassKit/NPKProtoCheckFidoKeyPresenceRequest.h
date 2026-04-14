@class NSString, NSData;

@interface NPKProtoCheckFidoKeyPresenceRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRelyingParty;
@property (retain, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) BOOL hasRelyingPartyAccountHash;
@property (retain, nonatomic) NSString *relyingPartyAccountHash;
@property (readonly, nonatomic) BOOL hasFidoKeyHash;
@property (retain, nonatomic) NSData *fidoKeyHash;

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
