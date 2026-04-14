@class NSString;

@interface BSServiceFeatureFlag : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *featureName;

- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)description;
- (id)initWithDomain:(id)a0 featureName:(id)a1;

@end
