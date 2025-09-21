@protocol SODarkWakeHelperDelegate;

@interface SODarkWakeHelper : NSObject

@property (nonatomic) struct __CFRunLoopSource { } *ioRunLoopSource;
@property (weak) id<SODarkWakeHelperDelegate> delegate;

+ (char)screenShieldIsRaised;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
