@class NSObject;
@protocol OS_os_transaction;

@interface HMFMemoryAssertion : HMFAssertion

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal;

- (void)invalidate;
- (void)mark;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
