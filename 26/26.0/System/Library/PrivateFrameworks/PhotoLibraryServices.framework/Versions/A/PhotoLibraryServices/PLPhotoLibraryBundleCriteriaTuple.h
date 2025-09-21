@class PLPhotoLibraryBundle, PLBackgroundJobCriteria;

@interface PLPhotoLibraryBundleCriteriaTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;
@property (readonly, nonatomic) id /* block */ progressBlock;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 withCriteria:(id)a1 withProgressReportBlock:(id /* block */)a2;

@end
