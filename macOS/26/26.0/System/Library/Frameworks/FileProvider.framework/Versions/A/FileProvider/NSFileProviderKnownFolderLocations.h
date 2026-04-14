@class NSFileProviderKnownFolderLocation;

@interface NSFileProviderKnownFolderLocations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long providedKnownFolders;
@property (nonatomic) BOOL shouldCreateBinaryCompatibilitySymlink;
@property (retain, nonatomic) NSFileProviderKnownFolderLocation *desktopLocation;
@property (retain, nonatomic) NSFileProviderKnownFolderLocation *documentsLocation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
