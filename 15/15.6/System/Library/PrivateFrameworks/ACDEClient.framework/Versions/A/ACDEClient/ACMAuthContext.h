@class NSString;

@interface ACMAuthContext : ACCAuthContext

@property (retain) NSString *userPreferences;

- (void)dealloc;
- (char)isDevicePwnd;
- (id)parametersDictionary;

@end
