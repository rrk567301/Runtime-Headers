@class NSString, SFButtonItem;

@interface SearchUIHeroButton : NSButton <SearchUICommandButton>

@property (retain) SFButtonItem *buttonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithTitle:(id)a0 image:(id)a1 command:(id)a2;
- (void)updateWithTitle:(id)a0 image:(id)a1;

@end
