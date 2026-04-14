@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
}

@property (nonatomic) double timeout;
@property (readonly, nonatomic) unsigned long long numberOfRetries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue;

- (id)init;
- (void).cxx_destruct;
- (long long)scheduleRetryIfNeededForError:(id)a0 usingBlock:(id /* block */)a1;

@end
