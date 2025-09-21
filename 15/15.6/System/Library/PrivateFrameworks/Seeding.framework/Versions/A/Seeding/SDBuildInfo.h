@interface SDBuildInfo : NSObject

@property (class, readonly, nonatomic) char isFeedbackAssistantAvailable;

+ (char)currentBuildIsSeed;

@end
