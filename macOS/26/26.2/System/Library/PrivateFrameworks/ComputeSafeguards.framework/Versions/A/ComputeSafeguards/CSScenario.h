@class NSString, NSDictionary;

@interface CSScenario : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *scenarioCriteria;
@property (retain, nonatomic) NSDictionary *restrictionsByProcess;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 andCriteria:(id)a1;

@end
