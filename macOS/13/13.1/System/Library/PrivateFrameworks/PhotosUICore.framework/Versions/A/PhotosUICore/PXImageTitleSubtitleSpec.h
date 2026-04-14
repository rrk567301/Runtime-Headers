@class PXTitleSubtitleLabelSpec, PXImageViewSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec

@property (retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec;
@property (retain, nonatomic) PXImageViewSpec *imageSpec;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
