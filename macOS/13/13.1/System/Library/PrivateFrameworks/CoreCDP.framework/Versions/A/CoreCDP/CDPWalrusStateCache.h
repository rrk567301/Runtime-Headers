@interface CDPWalrusStateCache : NSObject

@property unsigned long long walrusStatus;
@property BOOL isValid;

+ (id)sharedInstance;

- (id)init;

@end
