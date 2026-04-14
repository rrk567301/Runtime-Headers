@class NSString;

@interface PXApplicationVideoMuteController : PXVideoMuteController <PXChangeObserver, PXPreferencesObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)dealloc;
- (id)initWithAutoplaySetting:(BOOL)a0;
- (void)preferencesDidChange;

@end
