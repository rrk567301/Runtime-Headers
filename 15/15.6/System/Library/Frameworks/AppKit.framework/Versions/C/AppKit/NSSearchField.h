@class NSString, NSArray, NSMenu;
@protocol NSSearchFieldDelegate;

@interface NSSearchField : NSTextField <_NSBridgedSearchField> {
    struct { unsigned char _reserved2 : 2; unsigned char _isSearching : 1; unsigned int _reserved : 29; } _sfFlags;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

@property (getter=isEnabled) char enabled;
@property (setter=_setFocusRingAnimationType:) long long _focusRingAnimationType;
@property (readonly) NSString *stringValue;
@property unsigned long long controlSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchTextBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } searchButtonBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelButtonBounds;
@property (copy) NSArray *recentSearches;
@property (copy) NSString *recentsAutosaveName;
@property (retain) NSMenu *searchMenuTemplate;
@property char sendsWholeSearchString;
@property long long maximumRecents;
@property char sendsSearchStringImmediately;
@property (weak) id<NSSearchFieldDelegate> delegate;

+ (void)initialize;
+ (char)allowsWritingTools;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateSearchingState;
- (char)becomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonBounds;
- (char)centersPlaceholder;
- (char)isCurrentlyEditing;
- (id)ns_widgetType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForCancelButtonWhenCentered:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchButtonWhenCentered:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForSearchTextWhenCentered:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonBounds;
- (char)searchFieldCell:(id)a0 shouldChangeCancelButtonVisibility:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextBounds;
- (char)sendAction:(SEL)a0 to:(id)a1;
- (void)setCentersPlaceholder:(char)a0;
- (void)updateCell:(id)a0;

@end
