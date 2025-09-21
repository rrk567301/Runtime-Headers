@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (BOOL)isFolder;
- (id)description;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
