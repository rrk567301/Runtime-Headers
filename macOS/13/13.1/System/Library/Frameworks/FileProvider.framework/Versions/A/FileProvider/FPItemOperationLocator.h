@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)size;
- (id)identifier;
- (id)filename;
- (BOOL)isDownloaded;
- (BOOL)isFolder;
- (id)parentIdentifier;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isMaterializedOnDisk;

@end
