@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (void)initialize;
+ (id)sharedExecutionEnvironment;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (id)currentPlatformIdentifier;

@end
