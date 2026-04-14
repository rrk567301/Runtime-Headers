@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)start;
- (void).cxx_destruct;
- (void)_setupDistributedListener;
- (void)_setupDarwinListener;
- (void)registerListener:(id)a0;

@end
