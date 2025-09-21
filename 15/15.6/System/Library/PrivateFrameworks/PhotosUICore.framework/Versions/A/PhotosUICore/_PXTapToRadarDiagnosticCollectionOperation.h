@class NSString, NSError, NSObject;
@protocol OS_dispatch_group;

@interface _PXTapToRadarDiagnosticCollectionOperation : NSObject <PXTapToRadarDiagnosticCollectionOperation> {
    NSObject<OS_dispatch_group> *_completionGroup;
    char _timedOut;
    char _ended;
    char _success;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 timeout:(double)a1;
- (void)_timedOut;
- (void)endWithSuccess:(char)a0 error:(id)a1;
- (void)installCompletionHandler:(id /* block */)a0;

@end
