@class NSString;

@interface FedStatsCohortQueryLocale : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) NSString *deviceLocale;

+ (id)cohortInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;

@end
