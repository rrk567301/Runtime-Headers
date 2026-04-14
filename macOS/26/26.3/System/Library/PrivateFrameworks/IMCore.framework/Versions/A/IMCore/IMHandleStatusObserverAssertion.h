@class IMHandle;

@interface IMHandleStatusObserverAssertion : NSObject

@property (readonly, weak, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL valid;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHandle:(id)a0;

@end
