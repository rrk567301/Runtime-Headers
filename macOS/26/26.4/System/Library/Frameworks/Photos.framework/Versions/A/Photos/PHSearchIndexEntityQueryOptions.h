@class PHPhotoLibrary, NSIndexSet, PSIDatabase;

@interface PHSearchIndexEntityQueryOptions : NSObject

@property (retain, nonatomic) PSIDatabase *psiDatabaseForUnitTests;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long matchOptions;
@property (retain, nonatomic) NSIndexSet *categories;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)psiDatabase;

@end
