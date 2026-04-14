@class NSView, WBSReaderFontDownloadManager, NSScrollView, NSArray, NSString, NSStackView, WBSReaderFont, NSLayoutConstraint, NSButton, ReaderThemeButton, NSTableView;
@protocol ReaderAppearanceViewControllerDelegate;

@interface ReaderAppearanceViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, ReaderFontTableCellViewDelegate> {
    WBSReaderFont *_selectedFont;
    ReaderThemeButton *_whiteButton;
    ReaderThemeButton *_sepiaButton;
    ReaderThemeButton *_grayButton;
    ReaderThemeButton *_nightButton;
}

@property (weak) NSButton *decreaseTextSizeButton;
@property (weak) NSButton *increaseTextSizeButton;
@property (weak) NSStackView *themeButtonsStackView;
@property (weak) NSView *fontTableSeparator;
@property (weak) NSScrollView *fontTableScrollView;
@property (weak) NSTableView *fontTableView;
@property (weak) NSLayoutConstraint *tableViewWidthConstraint;
@property (weak) NSLayoutConstraint *tableViewHeightConstraint;
@property (weak, nonatomic) id<ReaderAppearanceViewControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property (retain, nonatomic) WBSReaderFontDownloadManager *fontDownloadManager;
@property (copy, nonatomic, setter=test_setFonts:) NSArray *test_fonts;
@property (readonly, nonatomic) NSTableView *test_fontTableView;
@property (readonly, nonatomic) BOOL test_shouldShowFontTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)moveUp:(id)a0;
- (void)moveDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)_fonts;
- (void)_fontDownloadDidFinish:(id)a0;
- (void)_clickedOnThemeButtonWithTheme:(long long)a0;
- (void)_fontDownloadProgressDidChange:(id)a0;
- (void)_removeFontTableAndRelatedViews;
- (BOOL)_canSelectFont:(id)a0;
- (unsigned long long)_checkedRowIndex;
- (id)_displayFontForFont:(id)a0;
- (void)_fontDownloadDidBegin:(id)a0;
- (void)_fontDownloadDidFail:(id)a0;
- (id)_fontForFontDownloadNotification:(id)a0;
- (id)_fontTableCheckImage;
- (unsigned long long)_nextSelectableRowIndex;
- (unsigned long long)_previousSelectableRowIndex;
- (void)_resizeFontsTable;
- (void)_setUpThemeButtons;
- (BOOL)_shouldShowFontTable;
- (void)_switchToFont:(id)a0 shouldInformDelegate:(BOOL)a1;
- (id)_tableCellViewForFont:(id)a0;
- (id)_themeButtonForTheme:(long long)a0;
- (long long)_themeForButton:(id)a0;
- (void)_updateWidthConstraintToFitFontDisplayNames;
- (void)clickedOnThemeButton:(id)a0;
- (void)decreaseTextSize:(id)a0;
- (void)didPressDownloadButtonForReaderFontTableCellView:(id)a0;
- (void)increaseTextSize:(id)a0;
- (void)updateTextSizeButtons;

@end
