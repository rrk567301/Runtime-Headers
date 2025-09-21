@class TIProactiveTrigger, NSString, _ICPredictedItem, NSNumber;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    char _isSecureContentCandidate;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
}

@property (nonatomic) char isFromPhraseDictionary;
@property (nonatomic) char isFromTextChecker;
@property (nonatomic, getter=isContinuousPathConversion) char continuousPathConversion;
@property (nonatomic, getter=shouldAccept) char shouldAccept;
@property (nonatomic, getter=shouldInsertSpaceAfterSelection) char shouldInsertSpaceAfterSelection;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *fromBundleId;
@property (nonatomic) unsigned long long ageForConnectionsMetrics;
@property (nonatomic) double excessPathRatio;
@property (copy, nonatomic) _ICPredictedItem *proactivePredictedItem;
@property (nonatomic) double geometryScore;
@property (nonatomic) double wordScore;
@property (nonatomic) int dynamicUsageCount;
@property (nonatomic) int dynamicPenaltyCount;
@property (nonatomic, getter=isToucanInlineCompletionCandidate) char toucanInlineCompletionCandidate;
@property (copy, nonatomic) NSNumber *staticLinguisticLikelihood;

+ (char)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 label:(id)a2;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 wordOriginFeedbackID:(unsigned long long)a3;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 wordOriginFeedbackID:(unsigned long long)a3 usageTrackingMask:(unsigned int)a4 sourceMask:(unsigned int)a5;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 wordOriginFeedbackID:(unsigned long long)a3 usageTrackingMask:(unsigned int)a4 sourceMask:(unsigned int)a5 learningFlagsMask:(unsigned long long)a6;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 wordOriginFeedbackID:(unsigned long long)a3 usageTrackingMask:(unsigned int)a4 sourceMask:(unsigned int)a5 secureContentCandidate:(char)a6 proactiveTrigger:(id)a7 proactivePredictedItem:(id)a8;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 wordOriginFeedbackID:(unsigned long long)a3 usageTrackingMask:(unsigned int)a4 sourceMask:(unsigned int)a5 secureContentCandidate:(char)a6 proactiveTrigger:(id)a7 proactivePredictedItem:(id)a8 responseKitCategory:(id)a9;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 wordOriginFeedbackID:(unsigned long long)a2;
- (id)initWithCandidate:(id)a0 responseKitCategory:(id)a1;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (char)isAutocorrection;
- (char)isSecureContentCandidate;
- (id)proactiveTrigger;
- (id)responseKitCategory;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end
