@class AXFUIElement, NSString, NSDictionary, NSOperationQueue;

@interface AXFObserver : AXFTargetSelector <NSCopying>

@property (copy, nonatomic) AXFUIElement *element;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSOperationQueue *_callbackQueue;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyForFiring;
- (void)fireWithElement:(id)a0 userInfo:(id)a1;

@end
