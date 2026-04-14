@class UXBarButtonItem, NSMutableArray;

@interface KHBookProductChooserViewController : KHProductChooserViewController {
    long long _onceToken;
    NSMutableArray *_bookProductFamilies;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)showHelp:(id)a0;
- (long long)projectType;
- (id)bookProductFamilies;

@end
