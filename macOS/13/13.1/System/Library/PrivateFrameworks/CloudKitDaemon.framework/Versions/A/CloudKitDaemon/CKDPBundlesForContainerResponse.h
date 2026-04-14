@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIDs;

+ (Class)bundleIDType;

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
- (void)clearBundleIDs;
- (void)addBundleID:(id)a0;
- (unsigned long long)bundleIDsCount;
- (id)bundleIDAtIndex:(unsigned long long)a0;

@end
