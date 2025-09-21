@class NSString, SDSVersion;

@interface SDSSession : NSObject <SDSActivatable> {
    void /* unknown type, empty encoding */ sessionImpl;
    void /* unknown type, empty encoding */ streams;
    void /* unknown type, empty encoding */ _stateUpdateHandler;
}

@property (nonatomic, readonly) SDSVersion *resolvedVersion;
@property (nonatomic, copy) id /* block */ stateUpdateHandler;
@property (nonatomic, readonly) NSString *description;

- (void)cancel;
- (id)init;
- (void)activate;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)listenForStreamWithConfiguration:(id)a0 streamHandler:(id /* block */)a1;
- (void)requestStreamWithConfiguration:(id)a0 streamHandler:(id /* block */)a1;
- (void)createStreamWith:(id)a0 streamHandler:(id /* block */)a1 isListener:(BOOL)a2;
- (void)queue_closeStreams;

@end
