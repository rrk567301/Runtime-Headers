@interface DOAsyncResult : NSObject <DOAsyncResultProtocol> {
    id /* block */ mCompletionBlock;
}

@property (readonly) BOOL done;
@property (readonly) long long result;
@property (readonly) void *context;

- (id)init;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 context:(void *)a1;
- (oneway void)setDoneWithResult:(long long)a0;
- (void)waitForResult;

@end
