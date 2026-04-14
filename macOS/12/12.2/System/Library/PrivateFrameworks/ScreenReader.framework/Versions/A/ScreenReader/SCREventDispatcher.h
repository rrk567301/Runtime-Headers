@class NSMutableDictionary, SCRCIndexMap;

@interface SCREventDispatcher : NSObject {
    NSMutableDictionary *_activatorTargets;
    NSMutableDictionary *_activatorEndingTargets;
    SCRCIndexMap *_guideTargets;
    SCRCIndexMap *_taggedKeyTargets;
}

- (id)init;
- (void)lock;
- (void).cxx_destruct;
- (BOOL)someoneHandlesEndingEvent:(id)a0;
- (void)dispatchEvent:(id)a0 withInfo:(id)a1 guideTarget:(id)a2;
- (void)setTagEventTarget:(id)a0 selector:(SEL)a1 tag:(long long)a2;
- (void)setGuideEventTarget:(id)a0 selector:(SEL)a1 guideTag:(long long)a2;
- (void)setActivatorEventTarget:(id)a0 selector:(SEL)a1 forCommand:(id)a2;
- (void)setActivatorEventTarget:(id)a0 selector:(SEL)a1 forCommand:(id)a2 forEndingEvent:(BOOL)a3;
- (void)setTagEventTarget:(id)a0 selector:(SEL)a1 tag:(long long)a2 forCommand:(id)a3;
- (void)removeTagEvent:(long long)a0;

@end
