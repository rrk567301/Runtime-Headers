@class PXPresentationState, PBPresentationReaderState;

@interface PBOfficeArtReaderState : OABReaderState {
    PXPresentationState *mXmlDocumentState;
}

@property (readonly, weak) PBPresentationReaderState *presentationState;

- (void).cxx_destruct;
- (id)xmlDrawingState;
- (id)initWithPresentationState:(id)a0;
- (id)xmlDocumentState;
- (id)drawableOnTgtSlideForShapeId:(int)a0;

@end
