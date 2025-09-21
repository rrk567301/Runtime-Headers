@class NSString, NSArray;

@interface ATXModeAnchorModelSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) char isStart;
@property (readonly, nonatomic) NSString *anchorType;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned long long numUniqueOccurrencesAfterAnchor;
@property (readonly, nonatomic) double posteriorProbability;
@property (readonly, nonatomic) double classConditionalProbability;
@property (readonly, nonatomic) NSArray *serializedTriggers;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModeUUID:(id)a0 isStart:(char)a1 anchorType:(id)a2 score:(double)a3 numUniqueOccurrencesAfterAnchor:(unsigned long long)a4 posteriorProbability:(double)a5 classConditionalProbability:(double)a6 serializedTriggers:(id)a7;

@end
