@class NSString, NSMutableArray;

@interface AWDNWAccumulator : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *durations;

+ (Class)durationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addDurations:(id)a0;
- (unsigned long long)durationsCount;
- (void)clearDurations;
- (id)durationsAtIndex:(unsigned long long)a0;

@end
