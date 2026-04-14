@class NSString, NSCandidateBarCompositeCandidate;
@protocol _NSCandidateBarFunctionRowSegment_AccessibilityDelegate;

@interface _NSCandidateBarFunctionRowSegment : NSObject

@property long long segmentType;
@property (copy) NSCandidateBarCompositeCandidate *candidate;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hitTestRect;
@property (getter=isPressed) BOOL pressed;
@property (getter=isCorrection) BOOL correction;
@property BOOL roundLeft;
@property BOOL roundRight;
@property BOOL drawsRightToLeft;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (nonatomic) id accessibilityParent;
@property (nonatomic) id<_NSCandidateBarFunctionRowSegment_AccessibilityDelegate> accessibilityDelegate;

+ (id)segmentWithType:(long long)a0 candidate:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void)dealloc;
- (id)description;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (id)initWithType:(long long)a0 candidate:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawWithForegroundOpacity:(double)a0;

@end
