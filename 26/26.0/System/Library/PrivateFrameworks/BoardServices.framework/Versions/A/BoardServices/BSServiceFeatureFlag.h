@class NSString;

@interface BSServiceFeatureFlag : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *featureName;

- (BOOL)isEnabled;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 featureName:(id)a1;

@end
