@class NSArray;

@interface PKExternalDeviceMigrationManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) unsigned long long transferSize;
@property (readonly, nonatomic) unsigned long long estimatedOnDiskSize;

- (id)initWithEntries:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqualToExternalDeviceMigrationManifest:(id)a0;

@end
