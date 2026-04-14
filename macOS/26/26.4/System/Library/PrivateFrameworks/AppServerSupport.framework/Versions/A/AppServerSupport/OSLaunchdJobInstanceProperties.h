@class NSString, NSURL, NSDictionary;

@interface OSLaunchdJobInstanceProperties : NSObject

@property (copy, nonatomic) NSString *sandboxProfile;
@property (retain, nonatomic) NSURL *sandboxContainer;
@property (copy, nonatomic) NSDictionary *environmentVariables;

- (void).cxx_destruct;

@end
