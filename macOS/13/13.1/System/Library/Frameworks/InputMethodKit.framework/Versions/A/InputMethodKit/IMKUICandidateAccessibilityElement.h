@class NSString, IMKCandidate;
@protocol IMKUICandidateAccessibilityTarget;

@interface IMKUICandidateAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton>

@property (retain, nonatomic) IMKCandidate *candidate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<IMKUICandidateAccessibilityTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityValueDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityDescription;
- (id)initWithCandidate:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
