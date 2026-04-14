@class NSString, QSSAStarFuzzyMatchingConfig;

@interface QSSMutableAStarFuzzyMatchingRequest : QSSAStarFuzzyMatchingRequest

@property (copy, nonatomic) NSString *matcher_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) QSSAStarFuzzyMatchingConfig *config;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
