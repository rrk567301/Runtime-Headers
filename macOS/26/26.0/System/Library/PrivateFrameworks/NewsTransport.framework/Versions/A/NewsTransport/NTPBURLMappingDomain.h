@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) double averageSafariVisitsPerDay;

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
