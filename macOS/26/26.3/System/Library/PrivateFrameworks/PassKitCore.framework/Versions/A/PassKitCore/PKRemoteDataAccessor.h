@class PKPassLibrary, NSString;

@interface PKRemoteDataAccessor : PKDataAccessor

@property (readonly, nonatomic) PKPassLibrary *library;
@property (readonly, nonatomic) NSString *objectUniqueID;

- (id)cachedImageSetForType:(long long)a0 withDisplayProfile:(id)a1 displayTraits:(id)a2;
- (id)dataForBundleResources:(id)a0;
- (id)content;
- (void)updateSettings:(unsigned long long)a0;
- (id)passLocalizedStringForKey:(id)a0;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)init;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (id)displayProfileOfType:(long long)a0;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (void).cxx_destruct;
- (id)archiveData;
- (id)initWithLibrary:(id)a0 objectUniqueID:(id)a1;
- (void)contentWithCompletion:(id /* block */)a0;
- (id)dataForBundleResource:(id)a0;
- (void)noteShared;
- (void)revocationStatusWithCompletion:(id /* block */)a0;

@end
