@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingMinibatchStats;

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) char hasStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *stats;

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

@end
