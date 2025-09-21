@class DOMDocument, NSString, DOMNamedNodeMap, DOMElement, WebArchive, DOMNodeList;

@interface DOMNode : DOMObject <DOMEventTarget>

@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, copy) NSString *nodeName;
@property (copy) NSString *nodeValue;
@property (readonly) unsigned short nodeType;
@property (readonly) DOMNode *parentNode;
@property (readonly) DOMNodeList *childNodes;
@property (readonly) DOMNode *firstChild;
@property (readonly) DOMNode *lastChild;
@property (readonly) DOMNode *previousSibling;
@property (readonly) DOMNode *nextSibling;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly, copy) NSString *namespaceURI;
@property (copy) NSString *prefix;
@property (readonly, copy) NSString *localName;
@property (readonly) DOMNamedNodeMap *attributes;
@property (readonly, copy) NSString *baseURI;
@property (copy) NSString *textContent;
@property (readonly) DOMElement *parentElement;
@property (readonly) char isContentEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue { } *)a0;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (char)isConnected;
- (id)textRects;
- (id)appendChild:(id)a0;
- (char)hasChildNodes;
- (id)removeChild:(id)a0;
- (char)contains:(id)a0;
- (char)dispatchEvent:(id)a0;
- (void)normalize;
- (id)insertBefore:(id)a0 refChild:(id)a1;
- (char)hasAttributes;
- (void)inspect;
- (id)webArchiveByFilteringSubframes:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_renderRect:(BOOL *)a0;
- (struct RootObject { } *)_rootObject;
- (void)addEventListener:(id)a0 :(id)a1 :(char)a2;
- (void)addEventListener:(id)a0 listener:(id)a1 useCapture:(char)a2;
- (id)cloneNode:(char)a0;
- (unsigned short)compareDocumentPosition:(id)a0;
- (void)getPreviewSnapshotImage:(struct CGImage **)a0 andRects:(id *)a1;
- (id)insertBefore:(id)a0 :(id)a1;
- (char)isDefaultNamespace:(id)a0;
- (char)isEqualNode:(id)a0;
- (char)isSameNode:(id)a0;
- (char)isSupported:(id)a0 :(id)a1;
- (char)isSupported:(id)a0 version:(id)a1;
- (id)lineBoxRects;
- (id)lookupNamespaceURI:(id)a0;
- (id)lookupPrefix:(id)a0;
- (id)markupString;
- (void)removeEventListener:(id)a0 :(id)a1 :(char)a2;
- (void)removeEventListener:(id)a0 listener:(id)a1 useCapture:(char)a2;
- (id)renderedImage;
- (id)replaceChild:(id)a0 :(id)a1;
- (id)replaceChild:(id)a0 oldChild:(id)a1;

@end
