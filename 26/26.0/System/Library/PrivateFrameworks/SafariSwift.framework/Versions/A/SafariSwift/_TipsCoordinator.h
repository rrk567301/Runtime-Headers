@class NSView;

@interface _TipsCoordinator : NSObject {
    void /* unknown type, empty encoding */ webSearchTipManager;
}

@property (nonatomic, readonly) NSView *webSearchTipView;
@property (nonatomic, weak) void /* function */ observer;

+ (void)configureTipsCenter;

- (void)startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
