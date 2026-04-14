@class NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimate : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addAction:(id)a0;
- (id)description;
- (id)actionAtIndex:(unsigned long long)a0;
- (unsigned long long)actionsCount;
- (void).cxx_destruct;
- (void)clearActions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
