@class SCRUIElement;

@interface SCRCachedUIElement : NSObject {
    unsigned int _retainCount;
}

@property (retain, nonatomic) SCRUIElement *uiElement;

- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;
- (void)retainUIElement;
- (unsigned int)elementRetainCount;
- (void)releaseUIElement;

@end
