@class IMHandle;

@interface IMHandleStatusObserverAssertion : NSObject

@property (readonly, weak, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL valid;

- (void)dealloc;
- (void)invalidate;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;

@end
