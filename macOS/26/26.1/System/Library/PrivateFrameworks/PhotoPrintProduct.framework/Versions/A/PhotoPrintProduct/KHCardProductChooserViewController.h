@class UXBarButtonItem, NSMutableArray;

@interface KHCardProductChooserViewController : KHProductChooserViewController {
    long long _onceToken;
    NSMutableArray *_cardProductFamilies;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)showHelp:(id)a0;
- (long long)projectType;
- (id)cardProductFamilies;

@end
