@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (char)supportsSecureCoding;
+ (id)emptyVersion;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)contentVersion;
- (id)metadataVersion;

@end
