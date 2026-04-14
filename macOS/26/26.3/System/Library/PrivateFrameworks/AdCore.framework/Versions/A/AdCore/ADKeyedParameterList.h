@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *parameterLists;

+ (id)options;
+ (Class)parameterListType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addParameterList:(id)a0;
- (void)clearParameterLists;
- (id)parameterListAtIndex:(unsigned long long)a0;
- (unsigned long long)parameterListsCount;

@end
