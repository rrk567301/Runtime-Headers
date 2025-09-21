@class NSDictionary, NSString;

@interface PLPhotoLibrarySearchCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *internalTestOptions;
@property (copy) NSString *uuid;
@property long long domain;
@property (copy) NSString *containerIdentifier;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
