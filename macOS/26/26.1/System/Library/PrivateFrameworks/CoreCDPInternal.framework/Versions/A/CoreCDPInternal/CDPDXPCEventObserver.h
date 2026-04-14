@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)start;
- (void)_setupDistributedListener;
- (void)registerListener:(id)a0;
- (void)_setupDarwinListener;
- (void).cxx_destruct;

@end
