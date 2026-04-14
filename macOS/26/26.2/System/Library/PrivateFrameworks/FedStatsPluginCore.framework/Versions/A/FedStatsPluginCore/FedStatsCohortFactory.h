@class NSDictionary;

@interface FedStatsCohortFactory : NSObject

@property (readonly) NSDictionary *cohortObjects;

+ (id)sharedInstance;
+ (id)cohortQueryFieldByName:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
