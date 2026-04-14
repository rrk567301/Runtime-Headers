@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (void)initialize;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (id)currentPlatformIdentifier;
+ (id)sharedExecutionEnvironment;

@end
