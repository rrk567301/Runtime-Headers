@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (void).cxx_destruct;
- (id)date;
- (long long)numberOfItems;
- (BOOL)isLoaded;
- (long long)sectionType;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:(id)a0;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
