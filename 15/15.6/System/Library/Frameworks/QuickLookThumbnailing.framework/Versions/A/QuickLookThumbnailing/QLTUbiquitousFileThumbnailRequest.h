@class QLCacheFileProviderVersionedFileIdentifier, FPItem;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest

@property (readonly) FPItem *item;
@property (readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)computeContentType;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(char)a4;
- (char)shouldProvideFoldedGenericIcon;

@end
