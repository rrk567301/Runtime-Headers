@class NSArray, SiriSharedUIContentPlatterView;

@interface SiriSharedUIContentPlatterViewController : NSViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;

- (void)loadView;
- (void).cxx_destruct;
- (void)appendSeparatorToViewControllers:(id)a0 forNextViewController:(id)a1;

@end
