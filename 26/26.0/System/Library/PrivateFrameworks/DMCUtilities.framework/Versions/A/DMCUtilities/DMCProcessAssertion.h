@class NSString, NSObject;
@protocol OS_os_transaction;

@interface DMCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *reason;

- (void)_releaseAssertion;
- (void)dealloc;
- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (void)_createAssertion;

@end
