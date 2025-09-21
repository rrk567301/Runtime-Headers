@class NSString;

@interface _NSMenuFilterField : NSSearchField <NSSearchFieldDelegate> {
    NSString *_query;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowsVibrancy;
- (void)viewDidMoveToWindow;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)_allowsContextMenus;
- (void)_deselectText;
- (unsigned long long)_effectiveFocusRingType;
- (id)_hitTestForEvent:(id)a0;
- (unsigned long long)focusRingType;
- (void)selectText:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;

@end
