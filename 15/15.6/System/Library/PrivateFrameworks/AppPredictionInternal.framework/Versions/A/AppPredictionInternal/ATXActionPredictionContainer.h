@class NSString, _PASLock, ATXMinimalSlotResolutionParameters;

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {
    _PASLock *_lock;
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[817]; float score; char isMediumConfidenceForBlendingLayer; char isHighConfidenceForBlendingLayer; } _predictionItem;
    ATXMinimalSlotResolutionParameters *_parameters;
}

@property (nonatomic) struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } predictionItem;
@property (readonly, nonatomic) NSString *actionKey;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)score;
- (void)setScore:(float)a0;
- (id)slotSet;
- (id)initWithMinimalSlotResolutionParameters:(id)a0 score:(float)a1 actionKey:(id)a2;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 actionKey:(id)a2;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 minimalSlotResolutionParameters:(id)a2 score:(float)a3 actionKey:(id)a4 predictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; })a5;
- (void)initializeScoredActionAndSlotSet;
- (char)isEqualToActionPredictionContainer:(id)a0;
- (id)scoredAction;

@end
