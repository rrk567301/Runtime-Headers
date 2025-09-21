@class KHProjectManager, NSMutableArray;
@protocol KHProjectBrowserDataSourceDelegate;

@interface KHProjectBrowserDataSource : NSObject

@property (readonly) KHProjectManager *projectManager;
@property (readonly) NSMutableArray *projectBundles;
@property (readonly) NSMutableArray *sections;
@property (weak, nonatomic) id<KHProjectBrowserDataSourceDelegate> delegate;

- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void)prepareData;

@end
