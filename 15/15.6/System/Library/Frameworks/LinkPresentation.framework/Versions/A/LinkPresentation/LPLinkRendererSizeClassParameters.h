@interface LPLinkRendererSizeClassParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) char preserveIconAspectRatioAndAlignmentWhenScaling;
@property (nonatomic) char onlyShowIcon;
@property (nonatomic) char neverShowIcon;
@property (nonatomic) char neverShowText;
@property (nonatomic) char disableTextWrapping;
@property (nonatomic) char useDominantColorForText;
@property (nonatomic) double minimumMediaCornerRadius;
@property (nonatomic) double minimumIconCornerRadius;
@property (nonatomic) char alignTextAndMediaHorizontalEdges;
@property (nonatomic) double mediaFixedAspectRatio;
@property (nonatomic) char needsSpaceAffordanceForDeleteButton;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_cacheKey;

@end
