@class NSMutableDictionary;

@interface AXSSAddRemoveBarCell : NSSegmentedCell

@property (retain, nonatomic) NSMutableDictionary *labelStorage;

- (SEL)action;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityLabelForSegment:(long long)a0;

@end
