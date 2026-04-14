@class IMHandle;

@interface IMHandleStatusObserverAssertion : NSObject

@property (readonly, weak, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL valid;

- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
