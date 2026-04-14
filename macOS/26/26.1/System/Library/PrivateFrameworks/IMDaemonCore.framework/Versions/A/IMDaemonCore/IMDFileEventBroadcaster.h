@interface IMDFileEventBroadcaster : NSObject {
    void /* unknown type, empty encoding */ fileEventStream;
}

+ (id)sharedInstance;

- (void)stopObserving;
- (void).cxx_destruct;
- (id)init;
- (void)observeChangesInPath:(id)a0;

@end
