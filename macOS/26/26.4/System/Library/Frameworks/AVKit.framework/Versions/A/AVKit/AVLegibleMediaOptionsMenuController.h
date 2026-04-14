@class NSString, AVMediaOptionsController, AVMediaOptionsMenuBuilder, AVPlayer;
@protocol AVLegibleMediaOptionsMenuControllerDelegate, AVLegibleMediaOptionsMenuControllerDelegatePrivate;

@interface AVLegibleMediaOptionsMenuController : NSObject <AVMediaOptionsControllerDelegate, NSMenuDelegate, AVMediaOptionsMenuBuilderDelegate> {
    AVMediaOptionsController *mediaOptionsController;
    AVMediaOptionsMenuBuilder *mediaOptionsMenuBuilder;
    id<AVLegibleMediaOptionsMenuControllerDelegatePrivate> _privateDelegate;
    id /* block */ presentationStateHandler;
}

@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) id<AVLegibleMediaOptionsMenuControllerDelegate> delegate;
@property (readonly, nonatomic) struct AVLegibleMediaOptionsMenuState { BOOL x0; long long x1; } menuState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)setPrivateDelegate:(id)a0;
- (void)updatePlayer:(id)a0;
- (id)privateDelegate;
- (id)buildMenuOfType:(long long)a0;
- (id)menuWithContents:(long long)a0;
- (struct AVLegibleMediaOptionsMenuState { BOOL x0; long long x1; })_menuState;
- (long long)currentEnablementState;
- (void)mediaOptionsController:(id)a0 didChangeLegibleMediaOptionTypeEnablementToState:(long long)a1;
- (void)mediaOptionsController:(id)a0 didChangeSelectedOption:(id)a1 withReason:(long long)a2;
- (void)mediaOptionsMenuBuilderDidCloseMenu:(id)a0;
- (void)mediaOptionsMenuBuilderDidFinishHover:(id)a0;
- (void)mediaOptionsMenuBuilderDidHoverStyle:(id)a0 option:(id)a1;
- (void)mediaOptionsMenuBuilderDidNavigateToSettings:(id)a0;
- (void)presentMenuOfType:(long long)a0 fromButton:(id)a1 presentationStateHandler:(id /* block */)a2;

@end
