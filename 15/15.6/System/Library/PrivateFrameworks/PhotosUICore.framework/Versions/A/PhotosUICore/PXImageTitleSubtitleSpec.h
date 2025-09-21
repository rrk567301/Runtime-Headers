@class PXTitleSubtitleLabelSpec, PXImageViewSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec

@property (retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec;
@property (retain, nonatomic) PXImageViewSpec *imageSpec;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
