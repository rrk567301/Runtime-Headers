@interface ABApplicationServices : NSObject

+ (id)defaultApplicationServices;
+ (id)newDefaultApplicationServices;
+ (BOOL)isRunningInContactsApplication;

@end
