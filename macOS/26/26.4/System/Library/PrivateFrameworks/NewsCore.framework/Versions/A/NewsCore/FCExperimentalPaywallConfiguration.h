@class NSString, NSArray;

@interface FCExperimentalPaywallConfiguration : NSObject

@property (readonly, nonatomic) BOOL paywallExperimentationEnabled;
@property (readonly, nonatomic) NSString *paywallTagID;
@property (readonly, nonatomic) NSArray *paywallExperimentationTagIDs;

+ (id)empty;

- (void).cxx_destruct;
- (id)initWithPaywallExperimentationEnabled:(BOOL)a0 paywallTagID:(id)a1 paywallExperimentationTagIDs:(id)a2;

@end
