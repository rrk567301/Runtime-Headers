@class NSArray;

@interface PKExternalDeviceMigrationManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) unsigned long long transferSize;
@property (readonly, nonatomic) unsigned long long estimatedOnDiskSize;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)init;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToExternalDeviceMigrationManifest:(id)a0;

@end
