@class NSString;

@interface FCSectionSupergroupKnobs : NSObject

@property (nonatomic) BOOL isEligible;
@property (readonly, nonatomic) NSString *nameOverride;
@property (readonly, nonatomic) double rankMultiplier;

- (id)initWithJSONString:(id)a0;
- (id)initWithJSONData:(id)a0;
- (void).cxx_destruct;

@end
