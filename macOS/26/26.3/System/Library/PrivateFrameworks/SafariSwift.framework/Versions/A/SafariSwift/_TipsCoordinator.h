@class NSView;

@interface _TipsCoordinator : NSObject {
    void /* unknown type, empty encoding */ webSearchTipManager;
}

@property (nonatomic, readonly) NSView *webSearchTipView;
@property (nonatomic, weak) void /* function */ observer;

+ (void)configureTipsCenter;

- (id)init;
- (void)startObserving;
- (void).cxx_destruct;
- (void)donatePerformSearchFromDefaultSearchEngineWebPageEvent;
- (void)invalidateWebSearchTip;

@end
