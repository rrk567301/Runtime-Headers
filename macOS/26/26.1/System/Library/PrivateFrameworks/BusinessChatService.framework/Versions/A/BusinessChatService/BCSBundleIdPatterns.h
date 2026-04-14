@class NSString, NSMutableArray;

@interface BCSBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *urlPatterns;

+ (Class)urlPatternsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUrlPatterns:(id)a0;
- (void)clearUrlPatterns;
- (id)urlPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)urlPatternsCount;

@end
