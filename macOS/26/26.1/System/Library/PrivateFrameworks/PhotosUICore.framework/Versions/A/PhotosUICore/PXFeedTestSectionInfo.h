@class PHPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (long long)numberOfItems;
- (id)date;
- (BOOL)isLoaded;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)photoLibrary;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
