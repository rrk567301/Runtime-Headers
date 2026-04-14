@class PCPPredictedContext, NSMutableArray;

@interface PCPPredictedContextTransition : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPredictedContext;
@property (retain, nonatomic) PCPPredictedContext *predictedContext;
@property (retain, nonatomic) NSMutableArray *predictedContextTransports;

+ (Class)predictedContextTransportType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearPredictedContextTransports;
- (unsigned long long)predictedContextTransportsCount;
- (void)addPredictedContextTransport:(id)a0;
- (id)predictedContextTransportAtIndex:(unsigned long long)a0;

@end
