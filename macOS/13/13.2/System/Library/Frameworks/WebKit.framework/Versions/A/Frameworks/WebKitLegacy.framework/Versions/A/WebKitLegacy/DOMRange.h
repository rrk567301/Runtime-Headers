@class WebArchive, NSString, DOMNode;

@interface DOMRange : DOMObject

@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, copy, nonatomic) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly, copy) NSString *text;

- (void)dealloc;
- (id)description;
- (void)detach;
- (id)_text;
- (id)renderedImageForcingBlackText:(BOOL)a0;
- (id)textRects;
- (short)compareBoundaryPoints:(unsigned short)a0 sourceRange:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (id)toString;
- (void)setStartAfter:(id)a0;
- (void)setStartBefore:(id)a0;
- (id)lineBoxRects;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setEndBefore:(id)a0;
- (void)setEndAfter:(id)a0;
- (void)collapse:(BOOL)a0;
- (void)selectNode:(id)a0;
- (void)selectNodeContents:(id)a0;
- (void)deleteContents;
- (id)extractContents;
- (id)cloneContents;
- (void)insertNode:(id)a0;
- (void)surroundContents:(id)a0;
- (id)cloneRange;
- (id)createContextualFragment:(id)a0;
- (short)compareNode:(id)a0;
- (BOOL)intersectsNode:(id)a0;
- (short)comparePoint:(id)a0 offset:(int)a1;
- (BOOL)isPointInRange:(id)a0 offset:(int)a1;
- (void)expand:(id)a0;
- (void)setStart:(id)a0 :(int)a1;
- (void)setEnd:(id)a0 :(int)a1;
- (short)compareBoundaryPoints:(unsigned short)a0 :(id)a1;

@end
