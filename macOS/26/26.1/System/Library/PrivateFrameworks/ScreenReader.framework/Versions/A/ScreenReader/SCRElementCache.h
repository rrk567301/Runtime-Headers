@class NSMutableDictionary;

@interface SCRElementCache : NSObject {
    NSMutableDictionary *_uiElementToElementMapping;
}

- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0;
- (id)getElementForUIElement:(id)a0;

@end
