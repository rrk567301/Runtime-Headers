@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

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
- (void)addCryptoSessions:(id)a0;
- (unsigned long long)cryptoSessionsCount;
- (void)clearCryptoSessions;
- (id)cryptoSessionsAtIndex:(unsigned long long)a0;

@end
