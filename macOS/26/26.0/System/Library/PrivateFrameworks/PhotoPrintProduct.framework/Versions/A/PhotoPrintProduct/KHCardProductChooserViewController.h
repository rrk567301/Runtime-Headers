@class UXBarButtonItem, NSMutableArray;

@interface KHCardProductChooserViewController : KHProductChooserViewController {
    long long _onceToken;
    NSMutableArray *_cardProductFamilies;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)showHelp:(id)a0;
- (long long)projectType;
- (id)cardProductFamilies;

@end
