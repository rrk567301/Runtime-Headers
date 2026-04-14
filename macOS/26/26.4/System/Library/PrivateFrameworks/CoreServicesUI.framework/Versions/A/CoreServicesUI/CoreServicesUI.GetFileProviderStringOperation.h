@interface CoreServicesUI.GetFileProviderStringOperation : NSOperation {
    void /* unknown type, empty encoding */ mutableState;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ targetBundleID;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
