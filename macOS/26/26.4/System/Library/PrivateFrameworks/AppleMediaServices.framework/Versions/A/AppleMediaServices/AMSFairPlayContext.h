@interface AMSFairPlayContext : NSObject

@property unsigned int contextID;

- (id)init;
- (void)dealloc;
- (void)destroyContext;
- (void)_validateFairPlayPath;
- (unsigned int)fairplayContextIDWithError:(id *)a0;

@end
