@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (BOOL)isFolder;
- (id)identifier;
- (id)description;
- (id)parentIdentifier;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (BOOL)isMaterializedOnDisk;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;

@end
