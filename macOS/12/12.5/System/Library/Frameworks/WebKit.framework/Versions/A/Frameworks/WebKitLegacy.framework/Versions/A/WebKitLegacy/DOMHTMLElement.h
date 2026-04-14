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
@property (readonly) BOOL isContentEditable;
@property (copy) NSString *idName;
@property (readonly) DOMHTMLCollection *children;
@property (readonly, copy) NSString *titleDisplayString;

- (void)setHidden:(BOOL)a0;
- (BOOL)hidden;
- (void)setDraggable:(BOOL)a0;
- (BOOL)draggable;
- (void)click;
- (BOOL)translate;
- (void)setTranslate:(BOOL)a0;
- (id)webkitdropzone;
- (void)setWebkitdropzone:(id)a0;
- (BOOL)spellcheck;
- (void)setSpellcheck:(BOOL)a0;
- (id)insertAdjacentElement:(id)a0 element:(id)a1;
- (void)insertAdjacentHTML:(id)a0 html:(id)a1;
- (void)insertAdjacentText:(id)a0 text:(id)a1;
- (BOOL)autocorrect;
- (void)setAutocorrect:(BOOL)a0;

@end
