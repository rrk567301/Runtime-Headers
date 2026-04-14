@interface FPItemOperationLocator : FPActionOperationLocator

+ (BOOL)supportsSecureCoding;

- (unsigned long long)size;
- (id)description;
- (id)identifier;
- (id)filename;
- (BOOL)isDownloaded;
- (id)parentIdentifier;
- (BOOL)isFolder;
- (BOOL)isProviderItem;
- (BOOL)requiresCrossDeviceCopy;
- (BOOL)isMaterializedOnDisk;

@end
