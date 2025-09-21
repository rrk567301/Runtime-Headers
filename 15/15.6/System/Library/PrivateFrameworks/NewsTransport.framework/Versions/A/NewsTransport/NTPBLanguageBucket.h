@class NSString, NSMutableArray, NTPBGroupingFlags;

@interface NTPBLanguageBucket : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) char hasGroupingFlags;
@property (retain, nonatomic) NTPBGroupingFlags *groupingFlags;

+ (Class)valuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
