@class NSString;

@interface CSDenseCandidateQueue : NSObject {
    struct __CFBinaryHeap { } *_denseQueue;
    NSString *_bundleID;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
