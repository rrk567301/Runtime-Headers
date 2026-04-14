@class SRRReferenceResolutionClientInternal;

@interface SRRReferenceResolutionClient : NSObject

@property (readonly) SRRReferenceResolutionClientInternal *underlyingObject;

- (void).cxx_destruct;
- (id)init;
- (void)collectSalientEntityStringsWithCompletion:(id /* block */)a0;
- (void)collectSalientStringsWithCompletion:(id /* block */)a0;

@end
