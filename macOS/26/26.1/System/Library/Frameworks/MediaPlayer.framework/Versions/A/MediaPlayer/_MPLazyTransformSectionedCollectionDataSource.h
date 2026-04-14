@class MPSectionedCollection, NSString;

@interface _MPLazyTransformSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource>

@property (readonly, nonatomic) MPSectionedCollection *collection;
@property (readonly, copy, nonatomic) id /* block */ sectionTransform;
@property (readonly, copy, nonatomic) id /* block */ itemTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)initWithSectionedCollection:(id)a0 sectionTransform:(id /* block */)a1 itemTransform:(id /* block */)a2;

@end
