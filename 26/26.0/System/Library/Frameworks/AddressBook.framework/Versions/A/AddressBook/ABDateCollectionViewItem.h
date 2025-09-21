@interface ABDateCollectionViewItem : ABCollectionViewItem

- (void)dealloc;
- (void)localeChanged:(id)a0;
- (id)init;
- (void)startObservingLocaleChanges;
- (void)stopObservingLocaleChanges;

@end
