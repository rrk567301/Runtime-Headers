@class NSString, DOMHTMLFormElement;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property char autofocus;
@property char disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *type;
@property (copy) NSString *name;
@property (copy) NSString *value;
@property (readonly) char willValidate;
@property (copy) NSString *accessKey;

- (void)click;

@end
