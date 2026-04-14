@class NSUUID, AXFUIElement;

@interface AXFUIElementObjCBridge : NSObject

@property (retain, nonatomic) AXFUIElement *element;
@property (readonly, nonatomic) NSUUID *uuid;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAXFUIElement:(id)a0;

@end
