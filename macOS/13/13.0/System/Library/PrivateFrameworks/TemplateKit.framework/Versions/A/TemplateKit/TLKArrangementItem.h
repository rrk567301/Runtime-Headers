@class NSString;

@interface TLKArrangementItem : NSObject <NUIArrangementItem>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;

@end
