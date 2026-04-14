@class NSBrowser, OSASplitView, OSADictionaryViewPrivate, NSTabView, NSOutlineView, WebView, NSTableView;

@interface OSADictionaryView : OSASplitView {
    OSASplitView *_splitView;
    NSOutlineView *_outlineView;
    WebView *_contentView;
    NSTabView *_tabView;
    NSTableView *_tableView;
    NSBrowser *_suiteBrowser;
    NSBrowser *_containmentBrowser;
    NSBrowser *_inheritanceBrowser;
    long long _viewMode;
    BOOL _searching;
    OSADictionaryViewPrivate *_private;
}

@property (retain) OSASplitView *splitView;
@property (retain) NSOutlineView *outlineView;
@property (retain) WebView *contentView;
@property (retain) NSTabView *tabView;
@property (retain) NSTableView *tableView;
@property (retain) NSBrowser *suiteBrowser;
@property (retain) NSBrowser *containmentBrowser;
@property (retain) NSBrowser *inheritanceBrowser;
@property long long viewMode;

- (id)controller;
- (void)setController:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;

@end
