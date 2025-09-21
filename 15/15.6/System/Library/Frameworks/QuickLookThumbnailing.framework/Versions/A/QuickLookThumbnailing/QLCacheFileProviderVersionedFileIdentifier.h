@class QLCacheFileProviderFileIdentifier;

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier;


- (id)initWithFileIdentifier:(id)a0 version:(id)a1;
- (id)initWithThumbnailRequest:(id)a0;

@end
