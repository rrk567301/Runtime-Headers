@class SUMacControllerDescriptor;

@interface SUOSULoginCredentialCacheInfo : NSObject

@property (retain) SUMacControllerDescriptor *descriptor;
@property BOOL downloadedAndPrepared;
@property BOOL bootstrapTokenAvailable;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 downloadedAndPrepared:(BOOL)a1 bootstrapTokenAvailable:(BOOL)a2;

@end
