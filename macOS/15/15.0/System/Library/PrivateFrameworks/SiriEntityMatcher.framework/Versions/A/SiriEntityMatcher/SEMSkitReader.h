@class NSString, SEMProvisionalResourceManager, NSURL, SEMSkitWrapper;

@interface SEMSkitReader : NSObject <SEMSkitReadAccess> {
    NSURL *_directoryURL;
    SEMProvisionalResourceManager *_resourceManager;
    SEMSkitWrapper *_skit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (BOOL)deactivate;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (id)indexLocale;
- (id)initWithSkitDirectoryURL:(id)a0;
- (id)initWithSkitDirectoryURL:(id)a0 lifespan:(double)a1;

@end
