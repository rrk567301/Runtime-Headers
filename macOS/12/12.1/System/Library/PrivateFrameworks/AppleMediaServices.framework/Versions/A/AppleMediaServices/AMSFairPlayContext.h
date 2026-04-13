@interface AMSFairPlayContext : NSObject

@property unsigned int contextID;

- (void)dealloc;
- (id)init;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:(id *)a0;
- (void)_validateFairPlayPath;

@end
