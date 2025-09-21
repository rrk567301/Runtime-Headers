@class NGMPBP256Key, NSMutableArray;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NGMPBP256Key *signingKey;
@property (retain, nonatomic) NSMutableArray *prekeys;

+ (Class)prekeysType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPrekeys;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)prekeysAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)prekeysCount;
- (BOOL)isEqual:(id)a0;
- (void)addPrekeys:(id)a0;
- (void).cxx_destruct;

@end
