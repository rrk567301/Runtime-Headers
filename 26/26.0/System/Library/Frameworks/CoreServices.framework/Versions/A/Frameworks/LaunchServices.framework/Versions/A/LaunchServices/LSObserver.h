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

- (void)startObserving;
- (void)stopObserving;
- (id)debugDescription;
- (void)dealloc;
- (void)_tearDownCallbacks;
- (id)description;
- (void)_configureCallbacks;
- (void).cxx_destruct;

@end
