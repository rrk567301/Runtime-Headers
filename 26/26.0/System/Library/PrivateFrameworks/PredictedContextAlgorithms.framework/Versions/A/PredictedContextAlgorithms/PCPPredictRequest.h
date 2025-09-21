@class PCPInputSignals, PCPPredictedContextResult;

@interface PCPPredictRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasInput;
@property (retain, nonatomic) PCPInputSignals *input;
@property (readonly, nonatomic) BOOL hasResult;
@property (retain, nonatomic) PCPPredictedContextResult *result;

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

@end
