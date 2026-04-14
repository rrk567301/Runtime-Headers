@class NSString, NSDictionary, iCloudAccountDetailsWebTabView;

@interface AOSUISpyglassPaneWebViewController : NSViewController <AOSUISpyglassPaneWebViewControllerDelegate> {
    NSDictionary *_userInfo;
}

@property (retain, nonatomic) iCloudAccountDetailsWebTabView *detailWebViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)didSelect;
- (BOOL)shouldSelect;

@end
