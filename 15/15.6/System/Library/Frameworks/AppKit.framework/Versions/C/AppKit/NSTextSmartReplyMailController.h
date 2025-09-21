@class NSEvent, NSString;

@interface NSTextSmartReplyMailController : NSObject <NSTextSmartReplyAppController>

@property (copy, nonatomic) NSEvent *lastHistoryEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)shouldCloseForTextInputContext:(id)a0;
- (unsigned long long)correctionPanelIgnoredEventMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAdjustedSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)isInputEmptyForContext:(id)a0 withCompletion:(id /* block */)a1;
- (char)shouldDebounceEventOfType:(unsigned long long)a0;
- (char)shouldProcessTextInputContext:(id)a0 forEvent:(id)a1 isNewFocus:(char)a2;
- (char)shouldRequestLongForm;

@end
