@class NSString, NSMutableArray;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearPaths;
- (void)addPaths:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)pathsAtIndex:(unsigned long long)a0;
- (unsigned long long)pathsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
