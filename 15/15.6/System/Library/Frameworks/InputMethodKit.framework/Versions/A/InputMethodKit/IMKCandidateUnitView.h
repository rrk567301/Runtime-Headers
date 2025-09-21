@class IMKCandidateLayoutUnit, IMKCandidateController, NSString, IMKCandidateUnitViewContentView, NSColor;

@interface IMKCandidateUnitView : IMKUIView <IMKCandidateIndexing, IMKCandidateLookupSupport>

@property (retain, nonatomic) IMKCandidateUnitViewContentView *contentView;
@property (retain, nonatomic) IMKCandidateLayoutUnit *layoutUnit;
@property (nonatomic) IMKCandidateController *controller;
@property (nonatomic) char animateChanges;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) char drawsBackgroundColor;
@property (nonatomic) char keptHidden;
@property (copy, nonatomic) NSString *guideNumber;
@property (nonatomic) char forceNoSelection;
@property (nonatomic) char roundsLeftCorners;
@property (nonatomic) char roundsRightCorners;
@property (readonly, nonatomic) NSString *uniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)candidate;
- (char)isFlipped;
- (void)mouseUp:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay:(char)a0;
- (char)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;
- (void)scrubbed:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)setUpLayer;
- (void)shouldUpdateForPressAndHold:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 with:(long long)a2;
- (void)tapped:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (void)touchesEnded:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;

@end
