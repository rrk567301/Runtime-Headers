@class NSString, NSMutableArray;

@interface AWDNWAccumulator : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *durations;

+ (Class)durationsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDurations:(id)a0;
- (void)clearDurations;
- (id)durationsAtIndex:(unsigned long long)a0;
- (unsigned long long)durationsCount;

@end
