@class NSString, SEMProvisionalResourceManager, NSURL, SEMSkitWrapper;

@interface SEMSkitReader : NSObject <SEMSkitReadAccess> {
    NSURL *_directoryURL;
    NSString *_description;
    SEMProvisionalResourceManager *_resourceManager;
    SEMSkitWrapper *_skit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prewarm;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)deactivate;
- (void).cxx_destruct;
- (id)matchSpans:(id)a0 error:(id *)a1;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (id)indexLocale;
- (id)initWithSkitDirectoryURL:(id)a0 description:(id)a1;
- (id)initWithSkitDirectoryURL:(id)a0 description:(id)a1 lifespan:(double)a2;

@end
