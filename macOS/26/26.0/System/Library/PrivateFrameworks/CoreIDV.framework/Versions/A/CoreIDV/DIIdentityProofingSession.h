@class _TtC7CoreIDV23IdentityProofingSession;

@interface DIIdentityProofingSession : NSObject

@property (retain, nonatomic) _TtC7CoreIDV23IdentityProofingSession *proofingSession;

- (id)init;
- (void).cxx_destruct;
- (void)cancelProofingWithState:(id)a0 country:(id)a1 completion:(id /* block */)a2;

@end
