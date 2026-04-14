@class NSMutableDictionary;

@interface AXSSAddRemoveBarCell : NSSegmentedCell

@property (retain, nonatomic) NSMutableDictionary *labelStorage;

- (SEL)action;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityLabelForSegment:(long long)a0;

@end
