@class NSFileProviderKnownFolderLocation;

@interface NSFileProviderKnownFolderLocations : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long providedKnownFolders;
@property (nonatomic) char shouldCreateBinaryCompatibilitySymlink;
@property (retain, nonatomic) NSFileProviderKnownFolderLocation *desktopLocation;
@property (retain, nonatomic) NSFileProviderKnownFolderLocation *documentsLocation;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
