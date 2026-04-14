@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct { unsigned char has_durationInOldState : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;
@property (nonatomic) BOOL hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)stateTransitionFeedbackType;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)a0;
- (void)addStateTransitionFeedback:(id)a0;
- (void)clearStateTransitionFeedbacks;
- (unsigned long long)stateTransitionFeedbacksCount;

@end
