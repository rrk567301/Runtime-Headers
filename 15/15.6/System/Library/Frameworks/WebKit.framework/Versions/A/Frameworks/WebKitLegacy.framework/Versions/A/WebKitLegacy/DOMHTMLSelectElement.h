@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property char autofocus;
@property char disabled;
@property (readonly) DOMHTMLFormElement *form;
@property char multiple;
@property (copy) NSString *name;
@property int size;
@property (readonly, copy) NSString *type;
@property (readonly) DOMHTMLOptionsCollection *options;
@property (readonly) int length;
@property int selectedIndex;
@property (copy) NSString *value;
@property (readonly) char willValidate;

- (void)remove:(int)a0;
- (void)_activateItemAtIndex:(int)a0 allowMultipleSelection:(char)a1;
- (void)_activateItemAtIndex:(int)a0;
- (void)add:(id)a0 :(id)a1;
- (void)add:(id)a0 before:(id)a1;
- (id)item:(unsigned int)a0;
- (id)namedItem:(id)a0;

@end
