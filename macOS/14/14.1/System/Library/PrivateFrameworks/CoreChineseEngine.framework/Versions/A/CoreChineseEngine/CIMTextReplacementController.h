@class _KSTextReplacementClientStore;

@interface CIMTextReplacementController : NSObject

@property (readonly, nonatomic) _KSTextReplacementClientStore *textReplacementClientStore;

- (id)init;
- (void).cxx_destruct;
- (void)rebuildWithMecabra:(struct __Mecabra { } *)a0;
- (void)rebuildWithMecabra:(struct __Mecabra { } *)a0 inQueue:(id)a1;

@end
