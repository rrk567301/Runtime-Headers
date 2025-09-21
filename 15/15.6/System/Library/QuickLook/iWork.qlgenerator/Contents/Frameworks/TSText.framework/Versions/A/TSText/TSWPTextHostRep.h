@class TSWPShapeRep, NSArray, NSString, NSObject;
@protocol TSDContainerInfo, TSKSearchReference;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep> {
    TSWPShapeRep *_editingRep;
}

@property (retain, nonatomic) NSObject<TSKSearchReference> *primaryFindResultSearchReference;
@property (readonly, nonatomic) char useFindOverlayers;
@property (retain, nonatomic) NSArray *searchReferences;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishInit;
- (void)willBeRemoved;
- (id)childReps;
- (void)drawTextBackground:(struct CGContext { } *)a0 insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pulsating:(char)a2;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (void)drawTextBackground:(struct CGContext { } *)a0 insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pulsating:(char)a2 shouldTint:(char)a3;

@end
