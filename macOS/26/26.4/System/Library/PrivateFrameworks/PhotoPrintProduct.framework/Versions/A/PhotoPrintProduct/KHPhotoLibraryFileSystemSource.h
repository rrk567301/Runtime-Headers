@class NSURL, KHPhotoLibraryGenericSection;

@interface KHPhotoLibraryFileSystemSource : KHPhotoLibraryGenericSource

@property (readonly, nonatomic) KHPhotoLibraryGenericSection *section;
@property (readonly, nonatomic) NSURL *fileURL;

- (unsigned long long)numberOfSections;
- (id)initWithFileURL:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (BOOL)canHandleURL:(id)a0;
- (id)iconImage;
- (id)identifier;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)acceptedImageExtensions;
- (id)collectionForPath:(id)a0;
- (void)executeHydration;
- (id)photoWithURL:(id)a0;

@end
