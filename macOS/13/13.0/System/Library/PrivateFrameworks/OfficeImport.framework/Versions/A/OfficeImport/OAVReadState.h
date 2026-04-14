@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

@interface OAVReadState : OCXReadState {
    Class mClient;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}

@property (weak) OAXDrawingState *oaxState;

- (void).cxx_destruct;
- (Class)client;
- (void)resetForNewDrawing;
- (id)packagePart;
- (id)initWithClient:(Class)a0 packagePart:(id)a1;
- (void)setPackagePart:(id)a0;
- (unsigned short)shapeTypeForId:(id)a0;
- (void)setShapeType:(unsigned short)a0 forId:(id)a1;
- (id)drawableForVmlShapeId:(id)a0;
- (void)setDrawable:(id)a0 forVmlShapeId:(id)a1;
- (void)addDualDrawable:(id)a0;
- (BOOL)isDualDrawable:(id)a0;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)a0;
- (id)blipRefForURL:(id)a0;

@end
