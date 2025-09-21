@interface CPKEmojiIMDataSource : CPKDefaultDataSource

+ (id)_dataCategories;
+ (void **)_classGlobalBufferPtr;

- (char)_shouldOmitCharacter:(id)a0;
- (id)characterFromIdentifier:(id)a0;
- (char)isEmojiOnlyDataSource;
- (id)storageIdentifier;

@end
