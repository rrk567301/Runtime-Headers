@class NSExtensionContext, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryExtensionSource : KHPhotoLibraryGenericSource

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;

- (unsigned long long)numberOfSections;
- (id)identifier;
- (id)iconImage;
- (id)initWithExtensionContext:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (BOOL)canHandleURL:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
