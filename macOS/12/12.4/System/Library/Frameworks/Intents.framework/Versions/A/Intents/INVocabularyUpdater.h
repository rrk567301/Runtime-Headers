@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;

- (void)setValidatedVocabulary:(id)a0 forIntentSlot:(id)a1 validationCompletion:(id /* block */)a2;
- (void)setCustomPhotoAlbumNames:(id)a0;

@end
