@class NSString, NSMutableArray;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPaths;
- (unsigned long long)pathsCount;
- (void)addPaths:(id)a0;
- (id)pathsAtIndex:(unsigned long long)a0;

@end
