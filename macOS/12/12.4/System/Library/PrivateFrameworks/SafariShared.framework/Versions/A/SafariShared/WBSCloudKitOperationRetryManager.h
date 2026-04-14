@class NSDate;

@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
    unsigned long long _numberOfRetries;
}

@property (nonatomic) double timeout;

- (id)init;
- (void).cxx_destruct;
- (long long)scheduleRetryIfNeededForError:(id)a0 usingBlock:(id /* block */)a1;

@end
