@interface FPItemOperationLocator : FPActionOperationLocator

+ (char)supportsSecureCoding;

- (id)description;
- (id)identifier;
- (unsigned long long)size;
- (id)filename;
- (char)isDownloaded;
- (char)isFolder;
- (id)parentIdentifier;
- (char)isMaterializedOnDisk;
- (char)isProviderItem;
- (char)requiresCrossDeviceCopy;

@end
