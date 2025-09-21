@class TRIGroupedPredicate;

@interface TRICustomTargetingPredicateLanguage : TRIPBMessage

@property (retain, nonatomic) TRIGroupedPredicate *predicateGroup;
@property (nonatomic) char hasPredicateGroup;

+ (id)descriptor;

@end
