@protocol SODarkWakeHelperDelegate;

@interface SODarkWakeHelper : NSObject

@property (nonatomic) struct __CFRunLoopSource { } *ioRunLoopSource;
@property (weak) id<SODarkWakeHelperDelegate> delegate;

+ (BOOL)screenShieldIsRaised;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
