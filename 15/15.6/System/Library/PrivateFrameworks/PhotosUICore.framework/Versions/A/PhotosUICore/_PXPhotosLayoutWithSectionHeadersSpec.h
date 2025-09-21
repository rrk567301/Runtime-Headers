@class PXPhotosSectionHeaderLayoutSpec;

@interface _PXPhotosLayoutWithSectionHeadersSpec : PXPhotosLayoutSpec {
    PXPhotosSectionHeaderLayoutSpec *_sectionHeaderSpec;
}

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 gridStyle:(long long)a2 wantsToggleSidebarButton:(char)a3 shouldMakeSpaceForLeadingChrome:(char)a4;
- (id)sectionHeaderSpec;

@end
