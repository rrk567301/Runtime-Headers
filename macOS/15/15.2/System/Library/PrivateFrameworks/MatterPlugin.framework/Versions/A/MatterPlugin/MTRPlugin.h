@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (id)init;
- (BOOL)start;
- (BOOL)stop;

@end
