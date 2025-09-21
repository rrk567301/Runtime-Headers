@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying> {
    struct { unsigned char conjunction : 1; } _has;
}

@property (nonatomic) char hasConjunction;
@property (nonatomic) int conjunction;
@property (readonly, nonatomic) char hasFirst;
@property (retain, nonatomic) PLQuery *first;
@property (readonly, nonatomic) char hasSecond;
@property (retain, nonatomic) PLQuery *second;
@property (retain, nonatomic) NSMutableArray *singleQueries;

+ (Class)singleQueriesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)logDescription;
- (void)addSingleQueries:(id)a0;
- (unsigned long long)singleQueriesCount;
- (void)clearSingleQueries;
- (id)singleQueriesAtIndex:(unsigned long long)a0;

@end
