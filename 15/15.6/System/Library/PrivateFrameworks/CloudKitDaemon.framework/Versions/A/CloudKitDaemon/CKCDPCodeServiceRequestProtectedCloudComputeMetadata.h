@class NSMutableArray;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

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
- (void)addCryptoSessions:(id)a0;
- (void)clearCryptoSessions;
- (id)cryptoSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)cryptoSessionsCount;

@end
