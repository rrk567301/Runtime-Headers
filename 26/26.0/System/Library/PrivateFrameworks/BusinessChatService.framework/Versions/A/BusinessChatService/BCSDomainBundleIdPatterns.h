@class NSString, NSMutableArray;

@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *bundleIdPatterns;

+ (Class)bundleIdPatternsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addBundleIdPatterns:(id)a0;
- (id)bundleIdPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIdPatternsCount;
- (void)clearBundleIdPatterns;

@end
