@class NGMPBP256Key, NSMutableArray;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NGMPBP256Key *signingKey;
@property (retain, nonatomic) NSMutableArray *prekeys;

+ (Class)prekeysType;

- (void)addPrekeys:(id)a0;
- (unsigned long long)prekeysCount;
- (id)dictionaryRepresentation;
- (id)prekeysAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)clearPrekeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
