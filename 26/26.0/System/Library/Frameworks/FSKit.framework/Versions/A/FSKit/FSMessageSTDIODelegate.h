@interface FSMessageSTDIODelegate : NSObject <FSTaskMessageOperations>

@property (readonly, retain) id /* block */ delegate;

+ (id)delegateWithCompletionHandler:(id /* block */)a0;

- (void)logMessage:(id)a0;
- (void).cxx_destruct;
- (void)completed:(id)a0 replyHandler:(id /* block */)a1;
- (void)prompt:(id)a0 replyHandler:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 replyHandler:(id /* block */)a1;

@end
