@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) double averageSafariVisitsPerDay;

+ (Class)pathsType;

- (void)clearPaths;
- (id)pathsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPaths:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)pathsCount;

@end
