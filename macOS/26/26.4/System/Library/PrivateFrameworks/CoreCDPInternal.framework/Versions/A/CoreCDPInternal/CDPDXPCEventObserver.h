@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)registerListener:(id)a0;
- (void).cxx_destruct;
- (void)_setupDarwinListener;
- (void)start;
- (void)_setupDistributedListener;

@end
