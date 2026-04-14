@class IMKCandidateController, IMKCandidateView, IMKCandidateLayoutUnit, IMKCandidateDefinitionUnit;

@interface IMKCandidateUIElement : NSObject

@property (nonatomic) IMKCandidateController *candidateController;
@property (retain, nonatomic) IMKCandidateView *candidateView;
@property (retain, nonatomic) IMKCandidateDefinitionUnit *definitionUnit;
@property (readonly, nonatomic) IMKCandidateLayoutUnit *layoutUnit;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithDefinitionUnit:(id)a0 candidateController:(id)a1 candidateView:(id)a2;

@end
