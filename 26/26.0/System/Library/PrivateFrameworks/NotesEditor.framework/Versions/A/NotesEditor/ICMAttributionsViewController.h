@class ICTTTextEditFilter, NSArray, ICAttributionViewConfiguration, NSColor;

@interface ICMAttributionsViewController : NSViewController {
    void /* unknown type, empty encoding */ _configurations;
    void /* unknown type, empty encoding */ _focusedConfiguration;
    void /* unknown type, empty encoding */ _backgroundColor;
    void /* unknown type, empty encoding */ attributionsUpdater;
    void /* unknown type, empty encoding */ attributionsObservation;
    void /* unknown type, empty encoding */ focusedConfigurationObservation;
    void /* unknown type, empty encoding */ filterObservation;
    void /* unknown type, empty encoding */ sidebarSwipeGestureAmountObservation;
    void /* unknown type, empty encoding */ sidebarHiddenObservation;
    void /* unknown type, empty encoding */ shareObservation;
    void /* unknown type, empty encoding */ isPreview;
    void /* unknown type, empty encoding */ hasFocus;
}

@property (nonatomic, weak) void /* function */ textView;
@property (nonatomic, weak) void /* function */ sidebarController;
@property (nonatomic, weak) void /* function */ authorHighlightsUpdater;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, retain) ICAttributionViewConfiguration *focusedConfiguration;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, retain) ICTTTextEditFilter *filter;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeAttributions;
- (void)stopObservingAttributions;

@end
