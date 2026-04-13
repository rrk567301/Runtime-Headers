@class NSObject;
@protocol OS_os_transaction;

@interface CARPFMemoryAssertion : CARPFAssertion

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)mark;

@end
