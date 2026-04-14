@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct { unsigned char has_durationInOldState : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;

+ (BOOL)isValid:(id)a0;
+ (Class)stateTransitionFeedbackType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearStateTransitionFeedbacks;
- (void)addStateTransitionFeedback:(id)a0;
- (unsigned long long)stateTransitionFeedbacksCount;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)a0;

@end
