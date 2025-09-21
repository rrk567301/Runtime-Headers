@class NSString;

@interface TSWPFloatingCommentRep : TSWPShapeRep <CALayerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)documentRoot;
- (char)forcesPlacementOnTop;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (char)modelIsReadOnly;
- (char)p_shouldDraw;

@end
