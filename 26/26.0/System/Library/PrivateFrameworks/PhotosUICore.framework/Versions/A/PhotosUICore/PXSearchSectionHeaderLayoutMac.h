@class NSString, PXPhotosLayoutSpec, PXSelectionSnapshot;

@interface PXSearchSectionHeaderLayoutMac : PXGSingleViewLayout <PXPhotosSectionedLayoutHeader> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSpec:(id)a0 viewModel:(id)a1;

@end
