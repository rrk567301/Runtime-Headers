@class NSString, NSMutableArray;

@interface AWDNWDurationAccumulation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *states;

+ (Class)statesType;

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
- (void)clearStates;
- (void)addStates:(id)a0;
- (unsigned long long)statesCount;
- (id)statesAtIndex:(unsigned long long)a0;

@end
