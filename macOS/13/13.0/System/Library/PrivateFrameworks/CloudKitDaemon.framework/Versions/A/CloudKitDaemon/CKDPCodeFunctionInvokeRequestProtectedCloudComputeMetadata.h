@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCryptoSessions;
- (void)addCryptoSessions:(id)a0;
- (unsigned long long)cryptoSessionsCount;
- (id)cryptoSessionsAtIndex:(unsigned long long)a0;

@end
