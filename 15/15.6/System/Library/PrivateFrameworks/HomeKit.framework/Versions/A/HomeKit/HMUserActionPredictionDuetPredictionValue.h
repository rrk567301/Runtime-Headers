@class NSString;

@interface HMUserActionPredictionDuetPredictionValue : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char predictionType : 1; } _has;
}

@property (readonly, nonatomic) char hasHomeIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) char hasTargetIdentifier;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) char hasTargetAccessoryServiceIdentifier;
@property (retain, nonatomic) NSString *targetAccessoryServiceIdentifier;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasPredictionType;
@property (nonatomic) int predictionType;

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
- (int)StringAsPredictionType:(id)a0;
- (id)predictionTypeAsString:(int)a0;

@end
