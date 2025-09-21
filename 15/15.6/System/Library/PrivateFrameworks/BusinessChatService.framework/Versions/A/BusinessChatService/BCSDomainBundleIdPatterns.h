@class NSString, NSMutableArray;

@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *bundleIdPatterns;

+ (Class)bundleIdPatternsType;

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
- (void)addBundleIdPatterns:(id)a0;
- (id)bundleIdPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIdPatternsCount;
- (void)clearBundleIdPatterns;

@end
