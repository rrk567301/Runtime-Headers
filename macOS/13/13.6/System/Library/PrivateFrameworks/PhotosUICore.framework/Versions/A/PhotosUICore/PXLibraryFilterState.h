@class NSString;

@interface PXLibraryFilterState : PXObservable <PXPreferencesObserver, NSCopying, PXFilterState>

@property (class, readonly) PXLibraryFilterState *sharedInstance;
@property (class, readonly) PXLibraryFilterState *filterState;

@property (nonatomic) long long viewMode;
@property (nonatomic, getter=isSharedLibraryBadgeEnabled) BOOL sharedLibraryBadgeEnabled;
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLibraryFilterActive:(long long)a0;
- (id)predicateForUseCase:(unsigned long long)a0;
- (void)preferencesDidChange;

@end
