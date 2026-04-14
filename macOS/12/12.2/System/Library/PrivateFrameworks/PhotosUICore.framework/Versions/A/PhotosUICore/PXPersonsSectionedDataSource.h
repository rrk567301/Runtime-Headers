@class NSArray, NSDictionary;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource

@property (readonly, copy, nonatomic) NSArray *personsSections;
@property (readonly, copy, nonatomic) NSDictionary *faceTiles;
@property (readonly, nonatomic) long long totalItemCount;

- (void).cxx_destruct;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithPersonsSections:(id)a0 faceTiles:(id)a1;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;

@end
