@class PCPInputSignals, PCPPredictedContextResult;

@interface PCPPredictRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasInput;
@property (retain, nonatomic) PCPInputSignals *input;
@property (readonly, nonatomic) BOOL hasResult;
@property (retain, nonatomic) PCPPredictedContextResult *result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
