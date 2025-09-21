@class QCArray, QCInteractionPort;
@protocol QCInteractionPatch;

@interface QCRenderingPatch : QCPatch {
    QCInteractionPort *_inputInteraction;
    QCArray *_dod;
    QCArray *_previousDod;
    QCArray *_dodNeedsUpdate;
    id<QCInteractionPatch> _savedInteractionPatch;
}

@property (readonly) struct _QCDod { } *dod;
@property struct CGPoint { double x0; double x1; } position;
@property double rotation;
@property double scaleX;
@property double scaleY;
@property (readonly) double depth;
@property (readonly) double renderingDepth;

+ (char)allowsInteraction;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)allowsScissors:(id)a0;
- (char)__execute:(double)a0 arguments:(id)a1;
- (void)_invalidateDod;
- (char)_renderAtTime:(double)a0 arguments:(id)a1;
- (char)automaticStateSet:(id)a0;
- (struct _QCDod { } *)createDodForContext:(id)a0;
- (void)finalize_QCRenderingPatch;
- (id)nodeActorForView:(id)a0;

@end
