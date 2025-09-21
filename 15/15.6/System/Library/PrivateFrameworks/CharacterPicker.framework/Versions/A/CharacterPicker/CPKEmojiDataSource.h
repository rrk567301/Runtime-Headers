@interface CPKEmojiDataSource : CPKDefaultDataSource

+ (id)_dataCategories;
+ (void **)_classGlobalBufferPtr;

- (unsigned int)_longCharacterForCharacters:(const unsigned short *)a0 length:(long long)a1;
- (char)_shouldOmitCharacter:(id)a0;
- (char)isEmojiOnlyDataSource;
- (id)storageIdentifier;

@end
