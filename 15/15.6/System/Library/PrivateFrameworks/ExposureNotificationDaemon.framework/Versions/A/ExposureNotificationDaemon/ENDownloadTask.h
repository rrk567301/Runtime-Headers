@class NSString, NSBackgroundActivityScheduler, ENDownloadEndpointState, NSDate, NSObject;
@protocol OS_dispatch_group;

@interface ENDownloadTask : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSBackgroundActivityScheduler *_scheduler;
    char _finished;
}

@property (readonly, nonatomic) ENDownloadEndpointState *endpointState;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) char shouldDefer;
@property (readonly, nonatomic) char didDefer;
@property (readonly, nonatomic) unsigned long long downloadCount;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;

+ (id)taskWithEndpointState:(id)a0 date:(id)a1 group:(id)a2 scheduler:(id)a3;

- (void).cxx_destruct;
- (void)finishDeferred:(char)a0 error:(id)a1;
- (void)incrementDownloadCount;

@end
