@class PHPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (id)photoLibrary;
- (long long)numberOfItems;
- (BOOL)isLoaded;
- (long long)sectionType;
- (void).cxx_destruct;
- (id)date;
- (id)initWithPhotoLibrary:(id)a0;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
