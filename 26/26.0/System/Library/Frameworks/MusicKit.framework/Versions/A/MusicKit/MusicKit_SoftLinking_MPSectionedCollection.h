@class MPSectionedCollection;

@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject {
    MPSectionedCollection *_underlyingSectionedCollection;
}

@property (readonly, nonatomic) MPSectionedCollection *_underlyingSectionedCollection;
@property (readonly, nonatomic) id underlyingSectionedCollection;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly, nonatomic) id /* block */ sectionIdentifiersAtIndexBlock;
@property (readonly, nonatomic) id /* block */ itemAtIndexPathBlock;
@property (readonly, nonatomic) id /* block */ sectionItemAtIndexPathBlock;

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)allItems;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (id)sectionAtIndex:(long long)a0;
- (id)allSections;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (void)enumerateTitledSectionsUsingBlock:(id /* block */)a0;
- (id)initWithUnderlyingSectionedCollection:(id)a0;

@end
