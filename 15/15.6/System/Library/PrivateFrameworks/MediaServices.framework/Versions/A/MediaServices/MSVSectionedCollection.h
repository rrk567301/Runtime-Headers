@class NSString, NSArray;

@interface MSVSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject> {
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id firstSection;
@property (readonly, nonatomic) id lastSection;
@property (readonly, nonatomic) id firstItem;
@property (readonly, nonatomic) id lastItem;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)msv_immutableClass;
+ (Class)msv_mutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)globalIndexForIndexPath:(id)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)allItems;
- (id)sectionAtIndex:(long long)a0;
- (id)allSections;
- (void)_initializeAsEmptySectionedCollection;
- (id)_stateDumpObject;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (char)hasSameContentAsSectionedCollection:(id)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)a0;

@end
