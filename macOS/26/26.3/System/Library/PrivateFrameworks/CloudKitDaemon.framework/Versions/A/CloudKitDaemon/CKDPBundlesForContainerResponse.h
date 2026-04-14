@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIDs;

+ (Class)bundleIDType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addBundleID:(id)a0;
- (id)bundleIDAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIDsCount;
- (void)clearBundleIDs;

@end
