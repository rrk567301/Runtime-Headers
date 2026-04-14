@class NSString, NSError;

@interface AMSBiometricsAvailabilityTask : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ purpose;
}

@property (class, nonatomic, readonly) NSString *failureTypeUserInfoKey;

@property (nonatomic) BOOL forceInProcess;

- (id)perform;
- (void).cxx_destruct;
- (id)init;
- (BOOL)performInProcessAndReturnError:(id *)a0;
- (id)initWithAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;
- (void)performInDaemonWithCompletionHandler:(void (^)(NSError *))a0;

@end
