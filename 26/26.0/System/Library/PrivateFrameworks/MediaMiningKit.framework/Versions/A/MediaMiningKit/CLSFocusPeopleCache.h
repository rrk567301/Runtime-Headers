@class PHPhotoLibrary, NSSet;

@interface CLSFocusPeopleCache : NSObject

@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long maximumNumberOfPeople;
@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

+ (id)_personSortDescriptors;

- (void)invalidate;
- (void).cxx_destruct;
- (id)_collectValidPersonLocalIdentifiers;
- (id)initWithPhotoLibrary:(id)a0 maximumNumberOfPeople:(unsigned long long)a1;

@end
