@protocol SODarkWakeHelperDelegate;

@interface SODarkWakeHelper : NSObject

@property (nonatomic) struct __CFRunLoopSource { } *ioRunLoopSource;
@property (weak) id<SODarkWakeHelperDelegate> delegate;

+ (BOOL)screenShieldIsRaised;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
