@class QLThumbnailVersion, QLCacheFileIdentifier;

@interface QLCacheVersionedFileIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) QLCacheFileIdentifier *fileIdentifier;
@property (readonly) QLThumbnailVersion *version;

+ (id)versionedFileIdentifierWithThumbnailRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileIdentifier:(id)a0 version:(id)a1;

@end
