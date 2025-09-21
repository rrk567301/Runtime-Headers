@interface ASCLazy : NSObject

@property (retain) id objectIfLoaded;
@property (readonly, copy, nonatomic) id /* block */ factory;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadingGuard;
@property (readonly) id object;

- (id)initWithFactory:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;

@end
