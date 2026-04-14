@class LARight, NSObject;
@protocol OS_dispatch_queue, LAKeyStoreGenericPassword;

@interface LASecret : NSObject {
    LARight *_right;
    id<LAKeyStoreGenericPassword> _genp;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

- (id)identifier;
- (void)dealloc;
- (id)right;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGenericPassword:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0;
- (void)setRight:(id)a0;

@end
