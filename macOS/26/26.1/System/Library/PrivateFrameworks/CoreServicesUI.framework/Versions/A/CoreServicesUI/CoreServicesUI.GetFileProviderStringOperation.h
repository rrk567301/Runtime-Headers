@interface CoreServicesUI.GetFileProviderStringOperation : NSOperation {
    void /* unknown type, empty encoding */ mutableState;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ targetBundleID;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (BOOL)isExecuting;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;

@end
