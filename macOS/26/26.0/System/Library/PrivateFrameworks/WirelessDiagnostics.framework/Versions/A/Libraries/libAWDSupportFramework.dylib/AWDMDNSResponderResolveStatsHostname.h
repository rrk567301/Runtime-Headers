@class NSString, NSMutableArray;

@interface AWDMDNSResponderResolveStatsHostname : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *results;

+ (Class)resultType;

- (unsigned long long)resultsCount;
- (void)clearResults;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)resultAtIndex:(unsigned long long)a0;
- (void)addResult:(id)a0;

@end
