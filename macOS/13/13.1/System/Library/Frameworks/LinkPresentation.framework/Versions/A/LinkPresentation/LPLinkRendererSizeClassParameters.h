@interface LPLinkRendererSizeClassParameters : NSObject

@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL preserveIconAspectRatioAndAlignmentWhenScaling;
@property (nonatomic) BOOL onlyShowIcon;
@property (nonatomic) BOOL disableTextWrapping;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_cacheKey;

@end
