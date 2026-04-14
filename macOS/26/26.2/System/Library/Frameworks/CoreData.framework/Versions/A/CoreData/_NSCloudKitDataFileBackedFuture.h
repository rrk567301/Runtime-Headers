@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;
- (void)_moveToPermanentLocation;
- (void)_copyToInterimLocation;

@end
