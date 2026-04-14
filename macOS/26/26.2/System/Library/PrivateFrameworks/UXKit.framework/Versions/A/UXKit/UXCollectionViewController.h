@class UXCollectionView, NSString, UXCollectionViewLayout;

@interface UXCollectionViewController : UXViewController <UXCollectionViewDataSource, UXCollectionViewDelegate> {
    UXCollectionViewLayout *_layout;
}

@property (retain, nonatomic) UXCollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)collectionViewClass;

- (id)initWithCollectionViewLayout:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_sendViewDidLoad;
- (double)scrollView:(id)a0 pageAlignedOriginOnAxis:(long long)a1 forProposedDestination:(double)a2 currentOrigin:(double)a3 initialOrigin:(double)a4 velocity:(double)a5;
- (id)preferredFirstResponder;

@end
