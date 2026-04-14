@class NSUUID, AXFUIElement;

@interface AXFUIElementObjCBridge : NSObject

@property (retain, nonatomic) AXFUIElement *element;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAXFUIElement:(id)a0;

@end
