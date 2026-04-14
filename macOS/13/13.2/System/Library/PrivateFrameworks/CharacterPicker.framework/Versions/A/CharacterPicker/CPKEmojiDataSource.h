@interface CPKEmojiDataSource : CPKDefaultDataSource

+ (void **)_classGlobalBufferPtr;
+ (id)_dataCategories;

- (BOOL)isEmojiOnlyDataSource;
- (id)storageIdentifier;
- (BOOL)_shouldOmitCharacter:(id)a0;
- (unsigned int)_longCharacterForCharacters:(const unsigned short *)a0 length:(long long)a1;

@end
