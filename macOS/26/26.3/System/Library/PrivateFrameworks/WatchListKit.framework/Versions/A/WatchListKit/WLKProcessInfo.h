@interface WLKProcessInfo : NSObject

@property (nonatomic) struct __SecTask { } *currentTask;

+ (id)currentProcessInfo;

- (id)valueForEntitlement:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)valueForEntitlement:(id)a0 containsObject:(id)a1;

@end
