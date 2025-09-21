@class NSString;

@interface FPKnownFolderExistingLocation : NSFileProviderKnownFolderLocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *itemIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithExistingItemIdentifier:(id)a0;
- (id)asExistingLocation;

@end
