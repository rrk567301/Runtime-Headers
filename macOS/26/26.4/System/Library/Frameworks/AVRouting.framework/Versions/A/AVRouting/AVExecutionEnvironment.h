@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (id)currentPlatformIdentifier;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (id)sharedExecutionEnvironment;

@end
