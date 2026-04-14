@protocol TKPickerOutlineViewEventHandlingDelegate;

@interface TKPickerOutlineView : NSOutlineView {
    BOOL _shouldSkipNextScrollRowToVisibleMessage;
}

@property (weak, nonatomic) id<TKPickerOutlineViewEventHandlingDelegate> eventHandlingDelegate;

- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (void).cxx_destruct;
- (void)scrollRowToVisible:(long long)a0;
- (void)selectRowWithoutScrolling:(long long)a0;

@end
