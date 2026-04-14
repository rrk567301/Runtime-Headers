@class NSExtensionContext, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryExtensionSource : KHPhotoLibraryGenericSource

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;

- (id)identifier;
- (id)title;
- (unsigned long long)numberOfSections;
- (id)iconImage;
- (void).cxx_destruct;
- (BOOL)canHandleURL:(id)a0;
- (id)initWithExtensionContext:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
