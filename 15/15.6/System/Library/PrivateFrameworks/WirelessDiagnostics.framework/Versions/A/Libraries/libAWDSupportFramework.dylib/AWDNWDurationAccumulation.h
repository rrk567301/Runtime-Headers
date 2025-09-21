@class NSString, NSMutableArray;

@interface AWDNWDurationAccumulation : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *states;

+ (Class)statesType;

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
- (void)addStates:(id)a0;
- (void)clearStates;
- (id)statesAtIndex:(unsigned long long)a0;
- (unsigned long long)statesCount;

@end
