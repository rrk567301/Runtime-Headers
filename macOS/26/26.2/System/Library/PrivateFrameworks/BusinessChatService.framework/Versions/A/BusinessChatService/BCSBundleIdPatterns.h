@class NSString, NSMutableArray;

@interface BCSBundleIdPatterns : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *urlPatterns;

+ (Class)urlPatternsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addUrlPatterns:(id)a0;
- (void)clearUrlPatterns;
- (id)urlPatternsAtIndex:(unsigned long long)a0;
- (unsigned long long)urlPatternsCount;

@end
