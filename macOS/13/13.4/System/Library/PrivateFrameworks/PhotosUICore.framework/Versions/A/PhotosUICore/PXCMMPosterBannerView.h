@class NSTextField, NSString, NSArray, NSButton;

@interface PXCMMPosterBannerView : UXView {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } headlineBoldRange;
@property (retain, nonatomic) NSTextField *headlineLabel;
@property (retain, nonatomic) NSTextField *subheadlineLabel;
@property (retain, nonatomic) NSButton *actionButton;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) id /* block */ actionButtonAction;
@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *subheadline;
@property (copy, nonatomic) NSArray *localizedNamesForHeadline;
@property (nonatomic) BOOL containsUnverifiedPersons;
@property (nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions;
@property (nonatomic, getter=isAddingPhotos) BOOL addingPhotos;

+ (id)_actionButtonFont;
+ (id)_headlineBoldFont;
+ (id)_subheadlineFont;

- (void).cxx_destruct;
- (void)layout;
- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateIfNeeded;
- (void)_updateActionButton;
- (void)_actionButtonTapped:(id)a0;
- (id)_attributedStringWithString:(id)a0 boldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_headlineStringAttributes;
- (void)_updateSubheadline;
- (void)setActionButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void)setHeadline:(id)a0 boldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
