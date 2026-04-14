@class NSOperationQueue, NSString;
@protocol LSObserverDelegate, NSObject;

@interface LSObserver : NSObject {
    id<LSObserverDelegate> _delegate;
    NSOperationQueue *_queue;
    id<NSObject> _changeObserver;
    unsigned char _observing : 1;
}

@property (weak) id<LSObserverDelegate> delegate;
@property (retain) NSOperationQueue *queue;
@property (copy) NSString *name;

+ (void)initialize;

- (void)stopObserving;
- (id)debugDescription;
- (id)description;
- (void)startObserving;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_tearDownCallbacks;
- (void)_configureCallbacks;

@end
