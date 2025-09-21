@class NSString, NSArray, NSDate;

@interface PHCameraSmartSharingMetadata : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) long long version;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *libraryScopeLocalIdentifier;
@property (readonly, nonatomic) char hasActiveLibraryScope;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSArray *filterContactIDs;
@property (readonly, nonatomic) NSArray *homeLocations;
@property (readonly, nonatomic) NSArray *frequentLocations;
@property (readonly, nonatomic) char locationShiftingRequired;

+ (id)_metadataFileURLForPhotoLibrary:(id)a0;
+ (id)_readMetadataFromFileURL:(id)a0;
+ (id)retrieveMetadataForPhotoLibrary:(id)a0;
+ (char)storeMetadata:(id)a0 forPhotoLibrary:(id)a1 error:(id *)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLibraryScopeIdentifier:(id)a0 filterContactIDs:(id)a1 homeLocations:(id)a2 isOnTrip:(char)a3;
- (id)initWithLibraryScopeIdentifier:(id)a0 identities:(id)a1 homeLocations:(id)a2 frequentLocations:(id)a3 locationShiftingRequired:(char)a4;

@end
