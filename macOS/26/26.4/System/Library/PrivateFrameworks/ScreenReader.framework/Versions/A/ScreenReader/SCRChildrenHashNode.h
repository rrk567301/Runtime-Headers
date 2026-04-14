@class AXFUIElement;

@interface SCRChildrenHashNode : NSObject

@property (retain, nonatomic) AXFUIElement *uiElement;
@property (nonatomic) unsigned long long *childrenCount;
@property (nonatomic) unsigned long long childrenHash;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUIElement:(id)a0 childrenHash:(unsigned long long)a1;
- (BOOL)didChildrenHashChange;

@end
