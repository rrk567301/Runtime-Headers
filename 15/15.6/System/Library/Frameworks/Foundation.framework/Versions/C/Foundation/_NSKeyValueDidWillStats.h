@class NSThread;

@interface _NSKeyValueDidWillStats : NSObject {
    long long _count;
    char _hasDecreased;
    struct { char hasBecomeReentrant; char hasExcessiveDids; char hasWillDidThreadMismatch; } _detectedIssues;
    NSThread *_originalThread;
}

- (void)dealloc;
- (void)_recordThread;

@end
