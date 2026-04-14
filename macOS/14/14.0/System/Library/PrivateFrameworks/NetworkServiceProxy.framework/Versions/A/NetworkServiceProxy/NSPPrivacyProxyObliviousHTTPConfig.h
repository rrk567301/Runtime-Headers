@class NSData, NSMutableArray;

@interface NSPPrivacyProxyObliviousHTTPConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *obliviousTargets;
@property (retain, nonatomic) NSData *obliviousHTTPConfig;

+ (Class)obliviousTargetsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addObliviousTargets:(id)a0;
- (void)clearObliviousTargets;
- (id)obliviousTargetsAtIndex:(unsigned long long)a0;
- (unsigned long long)obliviousTargetsCount;

@end
