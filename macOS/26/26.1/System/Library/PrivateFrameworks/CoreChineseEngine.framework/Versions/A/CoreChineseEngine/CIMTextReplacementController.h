@class _KSTextReplacementClientStore;

@interface CIMTextReplacementController : NSObject

@property (readonly, nonatomic) _KSTextReplacementClientStore *textReplacementClientStore;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (id)init;
- (void)rebuildWithMecabra:(struct __Mecabra { } *)a0;

@end
