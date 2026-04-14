@class PCPPredictedContext, PCPLocationOfInterest;

@interface PCPPredictedContextLocation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPredictedContext;
@property (retain, nonatomic) PCPPredictedContext *predictedContext;
@property (readonly, nonatomic) BOOL hasLocationOfInterest;
@property (retain, nonatomic) PCPLocationOfInterest *locationOfInterest;

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

@end
