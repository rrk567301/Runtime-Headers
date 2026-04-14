@class SCRUIElement, NSDictionary, NSString, NSMutableArray;

@interface SCRObserver : SCRCTargetSelector <NSCopying> {
    struct __AXUIElement { } *_axElementRef;
}

@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned int cancelMask;
@property (retain, nonatomic) SCRUIElement *uiElement;
@property (retain, nonatomic) SCRUIElement *origUIElement;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, setter=_setValid:) BOOL _isValid;
@property (retain, nonatomic, setter=_setFiringCopies:) NSMutableArray *_firingCopies;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (const struct __AXUIElement { } *)axElementRef;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 name:(id)a2 cancelMask:(unsigned int)a3;
- (void)fireWithAXUIElementRef:(struct __AXUIElement { } *)a0 origUIElement:(id)a1 userInfo:(id)a2;
- (id)_dequeueFiringCopyWithAXUIElementRef:(struct __AXUIElement { } *)a0 originalUIElement:(id)a1 userInfo:(id)a2;
- (void)_enqueueFiringCopy:(id)a0;
- (void)_setAXElementRef:(struct __AXUIElement { } *)a0;
- (void)fireWithUIElement:(struct __AXUIElement { } *)a0 originalUIElement:(id)a1 userInfo:(id)a2;

@end
