@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *parameterLists;

+ (id)options;
+ (Class)parameterListType;

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
- (void)addParameterList:(id)a0;
- (void)clearParameterLists;
- (id)parameterListAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterListsCount;

@end
