@interface MTRPlugin : NSObject

+ (id)sharedInstance;

- (BOOL)start;
- (BOOL)stop;

@end
