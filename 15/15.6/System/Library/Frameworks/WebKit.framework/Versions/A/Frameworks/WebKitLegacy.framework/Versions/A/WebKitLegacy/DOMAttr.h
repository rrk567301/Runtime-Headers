@class NSString, DOMElement, DOMCSSStyleDeclaration;

@interface DOMAttr : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) char specified;
@property (copy) NSString *value;
@property (readonly) DOMElement *ownerElement;
@property (readonly) DOMCSSStyleDeclaration *style;

- (char)isId;

@end
