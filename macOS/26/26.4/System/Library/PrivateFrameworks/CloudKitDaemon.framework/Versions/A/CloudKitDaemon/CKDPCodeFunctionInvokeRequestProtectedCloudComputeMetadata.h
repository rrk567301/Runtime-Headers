@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cryptoSessions;

+ (Class)cryptoSessionsType;

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
- (void)addCryptoSessions:(id)a0;
- (void)clearCryptoSessions;
- (id)cryptoSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)cryptoSessionsCount;

@end
