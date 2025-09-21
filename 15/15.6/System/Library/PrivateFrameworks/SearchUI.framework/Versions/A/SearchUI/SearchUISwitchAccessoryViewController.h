@class WFContextualAction, NSSwitch, SearchUIBiomeStreamSubscriber;

@interface SearchUISwitchAccessoryViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) NSSwitch *view;
@property char isAwaitingUpdate;
@property char expectedUpdateState;
@property (retain) SearchUIBiomeStreamSubscriber *subscriber;
@property (retain) WFContextualAction *action;
@property (nonatomic) char isHiddenByEvent;
@property (copy) id /* block */ debounceBlock;

+ (char)supportsRowModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateWithNotification:(id)a0;
- (id)setupView;
- (void)buttonPressed;
- (void)setOn:(char)a0 animated:(char)a1;
- (void)debounceSetOn:(char)a0 animated:(char)a1;
- (void)updateForEvent:(id)a0 animated:(char)a1;
- (void)updateWithRowModel:(id)a0;

@end
