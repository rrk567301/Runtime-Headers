@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)contentVersion;
- (id)metadataVersion;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
