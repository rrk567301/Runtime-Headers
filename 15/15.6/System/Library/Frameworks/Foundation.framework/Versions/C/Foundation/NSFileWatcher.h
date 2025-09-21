@class NSFileWatcherObservations, NSMutableDictionary, NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NSFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct { unsigned int val[8]; } _auditToken;
    NSURL *_url;
    id /* block */ _observer;
    char _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream { } *_eventStream;
    char _eventsAreAboutDirectory;
    char _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)dealloc;
- (void)setURL:(id)a0;
- (void)start;
- (void)_coalesceSubitemObservations;
- (void)handleFSEventPath:(id)a0 flags:(unsigned int)a1 id:(unsigned long long)a2;
- (id)initWithQueue:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)setLastObservedEventID:(unsigned long long)a0;
- (void)setObserver:(id /* block */)a0;
- (void)settle;
- (void)stop;
- (void)unsettle;
- (void)watchItem;

@end
