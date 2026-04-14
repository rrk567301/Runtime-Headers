@interface CBSILState : NSObject

@property unsigned long long SILState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (const char *)SILStateString;
- (BOOL)isSILActive;

@end
