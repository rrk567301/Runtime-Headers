@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)contentVersion;
- (id)metadataVersion;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
