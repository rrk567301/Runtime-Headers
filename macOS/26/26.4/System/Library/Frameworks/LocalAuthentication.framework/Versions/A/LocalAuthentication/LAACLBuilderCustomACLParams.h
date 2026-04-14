@class NSDictionary;

@interface LAACLBuilderCustomACLParams : NSObject

@property (nonatomic) long long authType;
@property (nonatomic) long long fallbackAuthType;
@property (retain, nonatomic) NSDictionary *apConstraints;
@property (retain, nonatomic) NSDictionary *credentials;

- (void).cxx_destruct;
- (id)init;

@end
