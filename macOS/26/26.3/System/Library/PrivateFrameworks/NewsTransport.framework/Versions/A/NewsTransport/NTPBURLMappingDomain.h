@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) double averageSafariVisitsPerDay;

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
