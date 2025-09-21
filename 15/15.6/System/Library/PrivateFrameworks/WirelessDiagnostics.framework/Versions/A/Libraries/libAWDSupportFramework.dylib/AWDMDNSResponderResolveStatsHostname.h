@class NSString, NSMutableArray;

@interface AWDMDNSResponderResolveStatsHostname : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *results;

+ (Class)resultType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)resultAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addResult:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;

@end
