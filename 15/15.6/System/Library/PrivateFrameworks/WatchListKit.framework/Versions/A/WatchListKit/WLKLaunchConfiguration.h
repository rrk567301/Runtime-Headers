@interface WLKLaunchConfiguration : NSObject

@property (nonatomic) char useSharedURLSession;
@property (nonatomic) char alwaysPrefetchAppConfiguration;

+ (id)sharedInstance;

@end
