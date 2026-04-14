@class NSString, NSMutableArray;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (id)dictionaryRepresentation;
- (id)description;
- (id)pathsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)pathsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearPaths;
- (unsigned long long)hash;
- (void)addPaths:(id)a0;

@end
