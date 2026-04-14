@interface _NSCloudKitDataFileBackedFuture : _NSDataFileBackedFuture

- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;
- (BOOL)_isCloudKitSupportOriginated;

@end
