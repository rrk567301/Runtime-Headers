@class NSString, NSMutableDictionary;
@protocol MOConnectionDelegate;

@interface MOConnection : NSObject {
    NSMutableDictionary *_pendingRequests;
    unsigned long long _pendingRequestCounter;
    NSString *_name;
    BOOL _interruptActive;
}

@property (weak, nonatomic) id<MOConnectionDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)callBlock:(id /* block */)a0 onInterruption:(id /* block */)a1;
- (id)getConnectionName;
- (id /* block */)onConnectionInterrupted;
- (BOOL)runBlockCompleted:(id)a0;
- (id)runBlockStarted:(id /* block */)a0 withConnectionError:(id /* block */)a1;

@end
