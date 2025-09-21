@class NSMutableDictionary, MKMapItem;

@interface MKLayoutCardViewController : MKStackingViewController

@property (retain, nonatomic) NSMutableDictionary *cacheVC;
@property (retain, nonatomic) NSMutableDictionary *cacheModuleType;
@property (retain, nonatomic) MKMapItem *mapItem;

- (void).cxx_destruct;
- (id)_createViewControllerForModule:(id)a0;
- (BOOL)isLayoutDynamic;
- (id)_cachedViewControllerForModule:(int)a0;
- (void)_createModuleLayout:(id)a0;
- (id)_layoutModuleForMapItem;
- (BOOL)isTransitItem;

@end
