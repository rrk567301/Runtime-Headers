@class NSStackView, CIMFuzzyPinyinTableView, NSButton, NSPopUpButton, NSLayoutConstraint, NSMutableArray, NSWindow;

@interface CIMPinyinPreferencesModule : CIMPreferencesModule

@property (retain, nonatomic) NSWindow *fuzzyPinyinPreferencesSheet;
@property (retain, nonatomic) NSMutableArray *fuzzyPinyinPreferences;
@property (retain, nonatomic) CIMFuzzyPinyinTableView *fuzzyPinyinTableView;
@property (retain, nonatomic) NSLayoutConstraint *fuzzyPinyinTableViewWidth;
@property (retain, nonatomic) NSStackView *topStackView;
@property (retain, nonatomic) NSStackView *keyboardLayoutStackView;
@property (retain, nonatomic) NSButton *keyboardLayoutCheckbox;
@property (retain, nonatomic) NSStackView *shuangpinLayoutStackView;
@property (retain, nonatomic) NSPopUpButton *shuangpinLayoutOption;
@property (retain, nonatomic) NSStackView *optionsStackView;
@property (retain, nonatomic) NSButton *correctSpellingOption;
@property (retain, nonatomic) NSStackView *correctFuzzyPinyinStackView;

- (void).cxx_destruct;
- (void)didAddToPreferencePane;
- (void)updateKeyboardLayoutPreview;
- (void)updateKeyboardLayoutPreferences;
- (void)updateShuangpinPreferences;
- (void)updateCantonesePhoneticPreferences;
- (void)updateOptionsSpacing;
- (void)loadFuzzyPinyinPairs;
- (void)saveFuzzyPinyinPairs;
- (void)openShuangpinLayoutHelp:(id)a0;
- (void)openFuzzyPinyinPreferences:(id)a0;
- (void)closeFuzzyPinyinPreferences:(id)a0;
- (void)keyboardLayoutValueChanged:(id)a0;

@end
