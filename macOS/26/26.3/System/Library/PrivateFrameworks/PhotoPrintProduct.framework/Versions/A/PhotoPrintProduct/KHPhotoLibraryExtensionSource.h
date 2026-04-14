@class NSExtensionContext, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryExtensionSource : KHPhotoLibraryGenericSource

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;

- (id)iconImage;
- (id)identifier;
- (unsigned long long)numberOfSections;
- (id)title;
- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)a0;
- (BOOL)canHandleURL:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
