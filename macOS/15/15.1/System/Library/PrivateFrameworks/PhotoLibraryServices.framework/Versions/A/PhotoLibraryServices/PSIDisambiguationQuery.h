@class PLPhotoLibrary, NSArray, PSIDatabase;

@interface PSIDisambiguationQuery : NSObject

@property (readonly, nonatomic) PSIDatabase *photosEntityStore;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSArray *disambiguations;
@property (nonatomic) BOOL cancelled;

+ (BOOL)useWildcardForDisambiguationType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDisambiguation:(id)a0 photoLibrary:(id)a1 photosEntityStore:(id)a2;
- (id)performDisambiguationQuery;
- (id)_consolidateDisambiguationResults:(id)a0;
- (id)_disambiguationResultWithDisambiguation:(id)a0 delegate:(id)a1;
- (id)initWithDisambiguations:(id)a0 photosEntityStore:(id)a1;

@end
