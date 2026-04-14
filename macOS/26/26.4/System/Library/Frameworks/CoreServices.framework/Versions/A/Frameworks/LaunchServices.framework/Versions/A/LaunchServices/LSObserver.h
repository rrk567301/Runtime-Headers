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

- (id)debugDescription;
- (void)startObserving;
- (void).cxx_destruct;
- (void)stopObserving;
- (id)description;
- (void)dealloc;
- (void)_configureCallbacks;
- (void)_tearDownCallbacks;

@end
