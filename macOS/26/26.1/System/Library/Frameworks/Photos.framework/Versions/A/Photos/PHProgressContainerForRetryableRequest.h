@class NSProgress;

@interface PHProgressContainerForRetryableRequest : NSObject {
    NSProgress *_currentRequestProgress;
    long long _currentPendingCount;
}

@property (readonly, nonatomic) NSProgress *totalProgress;

- (void).cxx_destruct;
- (id)init;
- (void)setRequestProgress:(id)a0;

@end
