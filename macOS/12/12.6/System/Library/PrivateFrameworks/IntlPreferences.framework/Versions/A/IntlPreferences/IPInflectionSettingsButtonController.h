@class _NSAttributedStringGrammarInflection, IPInflectionSettingsCustomSheetController, NSPopUpButton;
@protocol IPInflectionSettingsButtonControllerDelegate;

@interface IPInflectionSettingsButtonController : NSObject

@property (retain, nonatomic) NSPopUpButton *popUpButton;
@property (retain, nonatomic) IPInflectionSettingsCustomSheetController *customSheetController;
@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection;
@property (weak, nonatomic) id<IPInflectionSettingsButtonControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)updateMenu;
- (void)buttonValueChanged:(id)a0;
- (void)customSelected:(id)a0;
- (id)initWithPopUpButton:(id)a0;

@end
