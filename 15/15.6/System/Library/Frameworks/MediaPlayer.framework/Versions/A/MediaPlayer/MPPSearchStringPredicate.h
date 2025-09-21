@class NSString, NSMutableArray;

@interface MPPSearchStringPredicate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *properties;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;

@end
