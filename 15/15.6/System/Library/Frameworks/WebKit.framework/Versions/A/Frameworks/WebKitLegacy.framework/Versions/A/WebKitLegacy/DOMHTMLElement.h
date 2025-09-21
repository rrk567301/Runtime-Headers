@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *title;
@property (copy) NSString *lang;
@property (copy) NSString *dir;
@property int tabIndex;
@property (copy) NSString *accessKey;
@property (copy) NSString *innerText;
@property (copy) NSString *outerText;
@property (copy) NSString *contentEditable;
@property (readonly) char isContentEditable;
@property (copy) NSString *idName;
@property (readonly) DOMHTMLCollection *children;
@property (readonly, copy) NSString *titleDisplayString;

- (void)setHidden:(char)a0;
- (char)hidden;
- (void)setDraggable:(char)a0;
- (void)setAutocorrect:(char)a0;
- (char)autocorrect;
- (void)click;
- (char)draggable;
- (id)insertAdjacentElement:(id)a0 element:(id)a1;
- (void)insertAdjacentHTML:(id)a0 html:(id)a1;
- (void)insertAdjacentText:(id)a0 text:(id)a1;
- (void)setSpellcheck:(char)a0;
- (void)setTranslate:(char)a0;
- (void)setWebkitdropzone:(id)a0;
- (char)spellcheck;
- (char)translate;
- (id)webkitdropzone;

@end
