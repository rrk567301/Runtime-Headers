@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (id)parentIdentifier;
- (BOOL)isFolder;
- (id)description;
- (id)identifier;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
