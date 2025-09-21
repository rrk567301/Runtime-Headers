@class NSString;

@interface PKExternalDeviceMigrationManifestEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) NSString *fpanDescriptorIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long transferSize;
@property (readonly, nonatomic) unsigned long long estimatedOnDiskSize;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)_initWithIdentifier:(id)a0 passUniqueIdentifier:(id)a1 fpanDescriptorIdentifier:(id)a2 title:(id)a3 subtitle:(id)a4 transferSize:(unsigned long long)a5 estimatedOnDiskSize:(unsigned long long)a6;
- (id)initWithIdentifier:(id)a0 fpanDescriptorIdentifier:(id)a1 title:(id)a2 subtitle:(id)a3 transferSize:(unsigned long long)a4 estimatedOnDiskSize:(unsigned long long)a5;
- (id)initWithIdentifier:(id)a0 passUniqueIdentifier:(id)a1 title:(id)a2 subtitle:(id)a3 transferSize:(unsigned long long)a4 estimatedOnDiskSize:(unsigned long long)a5;
- (BOOL)isEqualToExternalDeviceMigrationManifestEntry:(id)a0;

@end
