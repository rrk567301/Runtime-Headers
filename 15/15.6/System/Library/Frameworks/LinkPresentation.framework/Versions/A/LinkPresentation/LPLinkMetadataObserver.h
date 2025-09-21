@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject {
    LPLinkMetadata *_metadata;
    id /* block */ _callback;
    char _hasScheduledCallback;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithMetadata:(id)a0 callback:(id /* block */)a1;

@end
