@class PXPhotosViewModel, NSString;
@protocol PXPhotosSectionHeaderLayoutViewProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate;

@interface PXDuplicatesSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
