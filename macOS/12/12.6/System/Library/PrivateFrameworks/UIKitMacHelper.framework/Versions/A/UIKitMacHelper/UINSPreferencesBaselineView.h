@class NSView;

@interface UINSPreferencesBaselineView : NSView

@property (weak) NSView *realBaselineView;

+ (id)decorateView:(id)a0 withText:(id)a1;

- (void).cxx_destruct;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;

@end
