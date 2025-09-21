@class SUMacControllerDescriptor;

@interface SUOSULoginCredentialCacheInfo : NSObject

@property (retain) SUMacControllerDescriptor *descriptor;
@property char downloadedAndPrepared;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 downloadedAndPrepared:(char)a1;

@end
