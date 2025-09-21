@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)_setupDarwinListener;
- (void)start;
- (void)_setupDistributedListener;
- (void)registerListener:(id)a0;
- (void).cxx_destruct;

@end
