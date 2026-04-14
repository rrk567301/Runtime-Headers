@class PKPassLibrary, NSString;

@interface PKRemoteDataAccessor : PKDataAccessor

@property (readonly, nonatomic) PKPassLibrary *library;
@property (readonly, nonatomic) NSString *objectUniqueID;

- (void)updateSettings:(unsigned long long)a0;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)content;
- (id)dataForBundleResource:(id)a0;
- (id)initWithLibrary:(id)a0 objectUniqueID:(id)a1;
- (id)cachedImageSetForType:(long long)a0 withDisplayProfile:(id)a1 displayTraits:(id)a2;
- (void)contentWithCompletion:(id /* block */)a0;
- (id)init;
- (id)archiveData;
- (id)passLocalizedStringForKey:(id)a0;
- (id)dataForBundleResources:(id)a0;
- (id)displayProfileOfType:(long long)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;

@end
