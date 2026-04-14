@class NSString, NSArray, PDFAccessibilityNodePrivate, PDFPage;
@protocol PDFAccessibilityNodeParent;

@interface PDFAccessibilityNode : NSAccessibilityElement <NSCopying, PDFAccessibilityNodeParent> {
    PDFAccessibilityNodePrivate *_private2;
}

@property (weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGPDFTaggedNode { } *nodeRef;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain, nonatomic) NSString *altText;
@property (readonly, weak, nonatomic) id<PDFAccessibilityNodeParent> parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPDFAccessibilityRootNode:(id)a0;
+ (Class)_nodeClassForNode:(struct CGPDFTaggedNode { } *)a0;
+ (id)_accessibilityElementForNode:(id)a0;
+ (BOOL)_containsOnlyTextDescendant:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextDescendant:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextContainerChilden:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextWordNodes:(struct CGPDFTaggedNode { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)addChild:(id)a0;
- (id)document;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilitySubrole;
- (id)accessibilityChildren;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityCustomRotors;
- (id)accessibilitySelectedText;
- (void)removeChild:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (void)setParent:(id)a0;
- (void)print;
- (BOOL)isValidAccessibilityElement;
- (BOOL)hasEquivalentTextNodeRepresentation;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (void)scrollToVisible;
- (void)buildAccessibilityHierarchy;
- (id)pageView;
- (BOOL)supportsAppKitControls;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToAccessibilitySpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isLink;
- (id)layerController;
- (id)spokenDescription;
- (id)_nodeLanguage;
- (id)accessibilityLanguage;
- (id)pageContainerNode;
- (id)_documentContainer;
- (id)descendantNodeWithNodeRef:(struct CGPDFTaggedNode { } *)a0;
- (id)descendantNodeWithHash:(unsigned long long)a0;
- (id)_descendantNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 reverseSearch:(BOOL)a2;
- (id)_previousNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_nextNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)previousNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)nextNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)previousNodeWithAnnotationType:(id)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)nextNodeWithAnnotationType:(id)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_sortedAnnotationNodesByTextRange;
- (BOOL)_isSubFigure;
- (void)_print:(id)a0 isTail:(BOOL)a1;
- (void)_annotate:(id)a0;

@end
