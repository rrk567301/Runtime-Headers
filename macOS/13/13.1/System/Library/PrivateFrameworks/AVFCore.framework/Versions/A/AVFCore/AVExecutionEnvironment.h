@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (id)sharedExecutionEnvironment;
+ (id)currentPlatformIdentifier;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (void)resetPlatformIdentifierForQueue:(id)a0;

@end
