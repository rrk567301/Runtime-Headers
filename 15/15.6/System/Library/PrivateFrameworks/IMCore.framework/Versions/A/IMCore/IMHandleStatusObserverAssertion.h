@class IMHandle;

@interface IMHandleStatusObserverAssertion : NSObject

@property (readonly, weak, nonatomic) IMHandle *handle;
@property (nonatomic) char valid;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithHandle:(id)a0;

@end
