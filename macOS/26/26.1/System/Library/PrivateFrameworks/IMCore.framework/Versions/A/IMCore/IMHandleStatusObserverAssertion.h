@class IMHandle;

@interface IMHandleStatusObserverAssertion : NSObject

@property (readonly, weak, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL valid;

- (id)initWithHandle:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
