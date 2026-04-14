@class PXPhotosSectionHeaderLayoutSpec;

@interface _PXPhotosLayoutWithSectionHeadersSpec : PXPhotosLayoutSpec {
    PXPhotosSectionHeaderLayoutSpec *_sectionHeaderSpec;
}

- (void).cxx_destruct;
- (id)sectionHeaderSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 gridStyle:(long long)a2 backgroundStyle:(long long)a3 wantsToggleSidebarButton:(BOOL)a4 shouldMakeSpaceForLeadingChrome:(BOOL)a5 hasPhysicalHomeButton:(BOOL)a6 dynamicHeaderHeight:(double)a7 overrideDefaultNumberOfColumns:(long long)a8;

@end
