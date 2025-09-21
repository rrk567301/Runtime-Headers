@class NSString, NSDictionary;

@interface OSLaunchdJobInstanceProperties : NSObject

@property (copy, nonatomic) NSString *sandboxProfile;
@property (copy, nonatomic) NSDictionary *environmentVariables;

- (void).cxx_destruct;

@end
