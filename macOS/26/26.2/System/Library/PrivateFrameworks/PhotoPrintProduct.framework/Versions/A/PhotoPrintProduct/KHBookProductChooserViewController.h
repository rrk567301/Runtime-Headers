@class UXBarButtonItem, NSMutableArray;

@interface KHBookProductChooserViewController : KHProductChooserViewController {
    long long _onceToken;
    NSMutableArray *_bookProductFamilies;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (void)showHelp:(id)a0;
- (long long)projectType;
- (id)bookProductFamilies;

@end
