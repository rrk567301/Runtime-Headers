@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SEMProvisionalResourceManager : NSObject {
    NSString *_resourceName;
    NSObject<OS_dispatch_queue> *_activationQueue;
    NSObject<OS_dispatch_queue> *_expirationQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    double _expirationInterval;
    char _isActive;
    id /* block */ _activationBlock;
    id /* block */ _deactivationBlock;
    long long _operationsInProgress;
}

@property (retain) NSDate *expirationDate;

- (id)init;
- (void).cxx_destruct;
- (char)isActive;
- (long long)deactivateWithError:(id *)a0;
- (void)_setExpirationTimer;
- (void)activateAsyncWithCompletion:(id /* block */)a0;
- (long long)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (id)initWithResourceName:(id)a0 lifespan:(double)a1 activationBlock:(id /* block */)a2 deactivationBlock:(id /* block */)a3 serializeOperations:(char)a4;

@end
