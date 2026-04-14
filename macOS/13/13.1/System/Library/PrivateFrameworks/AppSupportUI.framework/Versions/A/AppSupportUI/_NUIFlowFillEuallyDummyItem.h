@class NSString, _NUIFlowRowContainer;

@interface _NUIFlowFillEuallyDummyItem : NSObject <NUIArrangementItem> {
    _NUIFlowRowContainer *_rowContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (id)initWithRowContainer:(id)a0;

@end
