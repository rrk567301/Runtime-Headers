@interface MTRControllerFactory : NSObject

@property (readonly, nonatomic) char isRunning;

+ (id)sharedInstance;

- (void)shutdown;
- (char)startup:(id)a0;
- (id)startControllerOnExistingFabric:(id)a0;
- (id)startControllerOnNewFabric:(id)a0;

@end
