@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigNSURLSessionRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (void)copySessionAndAssertionForCreateOptions:(id)a0 dispatchQueue:(id)a1 outSession:(id *)a2 outAssertion:(struct FigOpaqueAssertion **)a3;
- (id)init;
- (void)releaseSession:(id)a0;
- (void)_checkForDoom:(id)a0;
- (void)dealloc;

@end
