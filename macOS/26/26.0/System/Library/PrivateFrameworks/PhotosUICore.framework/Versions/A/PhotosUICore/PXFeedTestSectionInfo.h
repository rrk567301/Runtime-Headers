@class PHPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (long long)numberOfItems;
- (id)photoLibrary;
- (id)date;
- (BOOL)isLoaded;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
