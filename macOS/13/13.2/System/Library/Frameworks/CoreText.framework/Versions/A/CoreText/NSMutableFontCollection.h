@interface NSMutableFontCollection : NSFontCollection

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontCollectionWithDescriptors:(id)a0;
+ (id)fontCollectionWithAllAvailableDescriptors;
+ (id)fontCollectionWithLocale:(id)a0;
+ (id)_newFromDictionary:(id)a0;
+ (id)_collectionAtURL:(id)a0 error:(id *)a1;

- (void)_editQueryForDescriptor:(id)a0 adding:(BOOL)a1;
- (void)addQueryForDescriptors:(id)a0;
- (void)removeQueryForDescriptors:(id)a0;
- (void)setCollectionAttributes:(id)a0;
- (void)setQueryDescriptors:(id)a0;
- (void)setExclusionDescriptors:(id)a0;

@end
