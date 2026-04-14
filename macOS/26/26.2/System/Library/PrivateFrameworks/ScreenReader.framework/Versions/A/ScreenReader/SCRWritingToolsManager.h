@class SCRWindow, SCRPopover, SCRElement;

@interface SCRWritingToolsManager : NSObject

@property (class, readonly) SCRWritingToolsManager *shared;

@property (retain, nonatomic) SCRElement *lastHostTextElement;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) SCRWindow *affordanceWindow;
@property (retain, nonatomic) SCRPopover *popover;
@property (retain, nonatomic) SCRPopover *suggestionPopover;

- (void).cxx_destruct;
- (void)_poll;
- (BOOL)_focusIntoPopover:(id)a0 fromElement:(id)a1 request:(id)a2 event:(id)a3;
- (id)_hostTextElement;
- (long long)_inferState;
- (void)addActionsToGuide:(id)a0 forElement:(id)a1;
- (BOOL)isVirtualFocusInPopover;
- (BOOL)moveToLinkedItemWithEvent:(id)a0 request:(id)a1 element:(id)a2;
- (BOOL)moveToWritingToolsSuggestionWithRequest:(id)a0 fromElement:(id)a1;
- (BOOL)moveToWritingToolsWithRequest:(id)a0 fromElement:(id)a1;
- (BOOL)openWritingToolsWithRequest:(id)a0 fromElement:(id)a1;
- (BOOL)popoverVisible;

@end
