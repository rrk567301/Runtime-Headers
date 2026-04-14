@class NSString, PerSitePreferencesPopoverViewController, NSArray;

@interface PerSitePreferencesPopoverManager : NSObject <TitleAndStackViewControllerDelegate> {
    PerSitePreferencesPopoverViewController *_preferencesViewController;
    NSArray *_checkBoxStackViewElements;
    NSArray *_popUpStackViewElements;
    NSString *_domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)togglePopoverForDomain:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)dismissPopoverIfNecessary;
- (id)_createPopUpStackViewElements;
- (id)_createCheckBoxStackViewElements;
- (void)_updateTitleAndStackViewControllerForDomain:(id)a0;
- (id)_stackViewElementsFromManager:(id)a0;
- (BOOL)_isShowingPopoverOnSecureSite;
- (void)titleAndStackViewControllerViewDidDisappear:(id)a0;

@end
