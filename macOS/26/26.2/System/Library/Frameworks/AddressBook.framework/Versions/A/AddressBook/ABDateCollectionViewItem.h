@interface ABDateCollectionViewItem : ABCollectionViewItem

- (void)localeChanged:(id)a0;
- (id)init;
- (void)dealloc;
- (void)startObservingLocaleChanges;
- (void)stopObservingLocaleChanges;

@end
