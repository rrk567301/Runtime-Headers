@class NSString, HMAccessoryInfoProtoPublicPairingIdentity;

@interface HMAccessoryDiagnosticInfoProtoCurrentAccessoryInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) char hasPublicPairingIdentity;
@property (retain, nonatomic) HMAccessoryInfoProtoPublicPairingIdentity *publicPairingIdentity;

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
