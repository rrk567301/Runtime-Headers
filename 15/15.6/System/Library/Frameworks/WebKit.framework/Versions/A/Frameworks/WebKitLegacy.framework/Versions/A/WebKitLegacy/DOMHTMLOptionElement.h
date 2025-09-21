@class NSString, DOMHTMLFormElement;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property char disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *label;
@property char defaultSelected;
@property char selected;
@property (copy) NSString *value;
@property (readonly, copy) NSString *text;
@property (readonly) int index;

@end
