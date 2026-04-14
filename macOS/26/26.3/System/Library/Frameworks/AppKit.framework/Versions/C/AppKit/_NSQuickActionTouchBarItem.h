@class _NSQuickActionTouchBarItemDataSource;
@protocol _NSQuickActionTouchBarItemDelegate;

@interface _NSQuickActionTouchBarItem : NSCollectionViewItem {
    BOOL _isObserving;
    void *_observationInfo;
}

@property (weak) id<_NSQuickActionTouchBarItemDelegate> delegate;
@property (readonly) _NSQuickActionTouchBarItemDataSource *representedDataSource;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedDataSource;
+ (id)keyPathsForValuesAffectingRepresentedDataSource;

- (void)setObservationInfo:(void *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void *)observationInfo;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)buttonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSizeForCollectionView:(id)a0;

@end
