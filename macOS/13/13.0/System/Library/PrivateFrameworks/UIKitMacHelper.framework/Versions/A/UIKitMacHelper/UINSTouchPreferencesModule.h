@class NSTextField, NSArray, NSView, UINSInputAlternativesEducationViewController, NSPopUpButton;

@interface UINSTouchPreferencesModule : UINSPreferencesModule {
    UINSInputAlternativesEducationViewController *_educationViewController;
    NSArray *_filteredOnboardingClasses;
}

@property (weak) NSView *taLabel;
@property (weak) NSTextField *showFilteredLabel;
@property (weak) NSPopUpButton *showFilteredButton;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)updateEducationViewControllerEnabledState;
- (void)turnTouchAlternativesOn:(id)a0;
- (void)toggleEducationVisibility:(id)a0;

@end
