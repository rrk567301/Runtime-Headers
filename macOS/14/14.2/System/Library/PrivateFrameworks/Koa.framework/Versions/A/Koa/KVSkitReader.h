@class NSString, KVSkitWrapper, NSURL, KVProvisionalResourceManager;

@interface KVSkitReader : NSObject <KVSkitReadAccess> {
    NSURL *_directoryURL;
    KVProvisionalResourceManager *_resourceManager;
    KVSkitWrapper *_skit;
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
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (id)indexLocale;
- (id)initWithSkitDirectoryURL:(id)a0;
- (id)initWithSkitDirectoryURL:(id)a0 lifespan:(double)a1;
- (id)matchSpans:(id)a0 error:(id *)a1;

@end
