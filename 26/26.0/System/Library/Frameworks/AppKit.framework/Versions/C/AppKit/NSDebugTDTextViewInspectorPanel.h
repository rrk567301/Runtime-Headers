@class NSString;

@interface NSDebugTDTextViewInspectorPanel : NSPanel <NSTextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)NSDebugTDTextViewInspectorPanelTitle;
+ (id)attributedStringForTextItem:(id)a0;
+ (id)attributedStringForWindow:(id)a0;
+ (id)attributedStringWithSymbolName:(id)a0 withTitle:(id)a1 withPrimaryAttributes:(BOOL)a2 withIconColorOverride:(id)a3;
+ (id)sharedPanel;
+ (id)sharedPanelCreatingIfNeeded:(BOOL)a0;


@end
