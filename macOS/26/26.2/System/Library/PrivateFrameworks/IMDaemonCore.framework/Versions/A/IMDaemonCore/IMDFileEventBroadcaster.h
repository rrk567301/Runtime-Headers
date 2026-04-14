@interface IMDFileEventBroadcaster : NSObject {
    void /* unknown type, empty encoding */ fileEventStream;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)stopObserving;
- (id)init;
- (void)observeChangesInPath:(id)a0;

@end
