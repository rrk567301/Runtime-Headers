@class NSString;

@interface PXTabBadgeModel : PXObservable <PXMutableTabBadgeModel>

@property (readonly, copy, nonatomic) NSString *localizedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setLocalizedString:(id)a0;

@end
