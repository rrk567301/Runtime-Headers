@class ABSearchElementUIController, NSString, NSArray, NSView, NSPopUpButton, NSTextField;

@interface ABSearchElementView : NSView <NSMenuDelegate> {
    NSPopUpButton *_propertyPopUp;
    NSArray *_widgets;
    ABSearchElementUIController *_controller;
    NSString *_property;
    long long _comparison;
    NSView *withinIntervalView;
    NSTextField *withinTextField;
    NSPopUpButton *withinPopupButton;
    NSView *_entryView;
    long long _userInterfaceLayoutDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderManager;
+ (long long)defaultComparisonForProperty:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)value;
- (void)propertyChanged:(id)a0;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (BOOL)validateMenuItem:(id)a0;
- (long long)userInterfaceLayoutDirection;
- (id)property;
- (id)searchElement;
- (long long)comparison;
- (void)setComparison:(long long)a0;
- (long long)junctionForComparison:(long long)a0 value:(id)a1;
- (id)conjoinedElementForProperties:(id)a0 value:(id)a1 withComparison:(long long)a2;
- (void)comparisonChanged:(id)a0;
- (void)updateWithinDateTense;
- (void)groupChanged:(id)a0;
- (void)setProperty:(id)a0 comparison:(long long)a1 value:(id)a2;
- (void)addProperty:(id)a0 withLocalization:(id)a1 toMenu:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })propertyPopUpFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 controller:(id)a1 userInterfaceLayoutDirection:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })comparisonPopUpFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textMatchingPopUpFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textMatchingFieldFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dateControlFrame;
- (void)setWidgets:(id)a0;
- (long long)comparisonForProperty:(id)a0;
- (id)comparisonPopUpForProperty:(id)a0 withSelection:(long long)a1;
- (id)entryViewForEntry:(id)a0;
- (BOOL)requiresValue;
- (id)subvalue;
- (void)updateWithinDateWidgetsWithInterval:(double)a0;
- (void)setValue:(id)a0 withProperty:(id)a1 comparison:(long long)a2 entryView:(id)a3;
- (void)setGroupOrAccount:(id)a0 onPopUpButton:(id)a1;
- (id)conjoinedElementForProperty:(id)a0 keys:(id)a1 value:(id)a2 withComparison:(long long)a3;
- (void)textMatchingChanged:(id)a0;
- (void)dateMatchingTypeChanged:(id)a0;
- (void)textFieldChanged:(id)a0;

@end
