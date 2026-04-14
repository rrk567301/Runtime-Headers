@interface BWIrisStillImageMovieMetadataCache : BWSimpleCache

- (void)cacheStillImageTransformDataFromMetadata:(id)a0 transformReferenceDimensions:(struct { int x0; int x1; })a1;
- (id)copyAndClearStillImageTransformDataForSettingsID:(id)a0;
- (void)cacheStillImageVideoToPhotoTransform:(id)a0 forSettingsID:(id)a1;

@end
