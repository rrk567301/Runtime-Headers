@class NSString;

@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

+ (id)containerWithIdentifier:(id)a0 type:(long long)a1;

- (unsigned long long)hash;
- (id)copyWithReplacementType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)containerURL;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)fetchStatus;
- (BOOL)isEqualToContainer:(id)a0;
- (id)_groupContainerDirectoryAsOwner;
- (id)_appBundleContainerDirectoryAsOwner;
- (id)_appBundleContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_appContainerDirectoryAsSystemWithContainerClass:(unsigned long long)a0 error:(id *)a1;
- (id)_appDataContainerDirectoryAsOwner;
- (id)_appDataContainerDirectoryAsSystemWithError:(id *)a0;
- (id)_containerError:(unsigned long long)a0 withFormat:(id)a1;
- (id)_containerURLWithError:(id *)a0;
- (id)_groupContainerDirectoryAsSystemWithError:(id *)a0;
- (id)containerURLAsOwner;
- (id)copyWithReplacementIdentifier:(id)a0;
- (id)sanitizedIdentifier;

@end
