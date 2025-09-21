@interface MRGroupSessionAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCancellationHandler:(id /* block */)a0;

@end
