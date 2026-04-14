@interface IMDFileEventBroadcaster : NSObject {
    void /* unknown type, empty encoding */ fileEventStream;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)stopObserving;
- (void)observeChangesInPath:(id)a0;

@end
