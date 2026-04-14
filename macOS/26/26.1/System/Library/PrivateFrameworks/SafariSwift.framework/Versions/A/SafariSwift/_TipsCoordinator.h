@class NSView;

@interface _TipsCoordinator : NSObject {
    void /* unknown type, empty encoding */ webSearchTipManager;
}

@property (nonatomic, readonly) NSView *webSearchTipView;
@property (nonatomic, weak) void /* function */ observer;

+ (void)configureTipsCenter;

- (void)startObserving;
- (void).cxx_destruct;
- (id)init;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
