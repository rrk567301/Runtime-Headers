@interface CPKEmojiIMDataSource : CPKDefaultDataSource

+ (void **)_classGlobalBufferPtr;
+ (id)_dataCategories;

- (BOOL)isEmojiOnlyDataSource;
- (id)storageIdentifier;
- (id)characterFromIdentifier:(id)a0;
- (BOOL)_shouldOmitCharacter:(id)a0;

@end
