@interface CPKEmojiIMDataSource : CPKDefaultDataSource

+ (void **)_classGlobalBufferPtr;
+ (id)_dataCategories;

- (id)storageIdentifier;
- (BOOL)isEmojiOnlyDataSource;
- (id)characterFromIdentifier:(id)a0;
- (BOOL)_shouldOmitCharacter:(id)a0;

@end
