@class _TtC22AccessibilityUtilities13AXPreferences;

@interface AccessibilityUtilities.AXPreferences : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectorTargetMap;
}

@property (class, nonatomic, readonly) _TtC22AccessibilityUtilities13AXPreferences *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceover;
@property (nonatomic, retain) void /* unknown type, empty encoding */ magnifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ speech;
@property (nonatomic, retain) void /* unknown type, empty encoding */ spokenContent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ assistiveTouch;
@property (nonatomic, retain) void /* unknown type, empty encoding */ liveSpeech;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)observeWithSelector:(SEL)a0 listener:(id)a1 block:(id /* block */)a2;

@end
