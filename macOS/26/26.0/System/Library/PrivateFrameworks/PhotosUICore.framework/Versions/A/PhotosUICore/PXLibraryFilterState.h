@class _TtC12PhotosUICore33PXLibraryFilterObservableViewMode, PXSharedLibraryStatusProvider, NSString, PHPhotoLibrary;

@interface PXLibraryFilterState : PXObservable <PXChangeObserver, PXPreferencesObserver, NSCopying, PXFilterState>

@property (readonly, nonatomic) _TtC12PhotosUICore33PXLibraryFilterObservableViewMode *viewModeObservable;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic) long long viewMode;
@property (readonly, nonatomic) long long observableViewMode;
@property (nonatomic, getter=isSharedLibraryBadgeEnabled) BOOL sharedLibraryBadgeEnabled;
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;
@property (readonly, nonatomic) BOOL includeOthersInSocialGroupAssets;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_localizedDescriptionForViewMode:(long long)a0;
- (id)initWithSharedLibraryStatusProvider:(id)a0;
- (BOOL)isLibraryFilterActive:(long long)a0;
- (id)menuItemTitleForLibraryFilter:(long long)a0;
- (id)predicateForUseCase:(unsigned long long)a0;
- (void)preferencesDidChange;

@end
