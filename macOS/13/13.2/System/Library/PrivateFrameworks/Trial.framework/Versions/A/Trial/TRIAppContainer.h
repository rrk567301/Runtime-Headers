@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)containerWithIdentifier:(id)a0 type:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)containerURL;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (long long)fetchStatus;
- (id)_containerURLWithError:(id *)a0;
- (id)containerURLAsOwner;
- (id)sanitizedIdentifier;
- (id)_containerError:(unsigned long long)a0 withFormat:(id)a1;
- (id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)a0 error:(id *)a1;
- (id)_appBundleContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appDataContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_groupContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appBundleContainerDirectoryAsOwner;
- (id)_appDataContainerDirectoryAsOwner;
- (id)_groupContainerDirectoryAsOwner;
- (id)copyWithReplacementIdentifier:(id)a0;
- (id)copyWithReplacementType:(long long)a0;
- (BOOL)isEqualToContainer:(id)a0;

@end
