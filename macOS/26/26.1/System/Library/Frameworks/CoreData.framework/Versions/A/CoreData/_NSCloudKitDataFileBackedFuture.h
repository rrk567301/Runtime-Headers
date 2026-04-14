@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (void)_moveToPermanentLocation;
- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;

@end
