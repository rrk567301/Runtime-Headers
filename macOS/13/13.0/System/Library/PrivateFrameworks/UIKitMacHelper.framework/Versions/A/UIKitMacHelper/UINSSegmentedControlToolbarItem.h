@class NSArray, NSString, NSMutableDictionary, NSSegmentedControl;
@protocol UINSToolbarItemSelectedIndexPropertyObserver, UINSAccessibilityInfo;

@interface UINSSegmentedControlToolbarItem : UINSToolbarItem <UINSSegmentedControlToolbarItem> {
    NSMutableDictionary *_segmentsToMenu;
}

@property (readonly) NSSegmentedControl *_segmentedControl;
@property (copy, nonatomic) NSArray *segmentTitles;
@property (copy, nonatomic) NSArray *segmentHelperImages;
@property (nonatomic) long long selectedSegment;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<UINSToolbarItemSelectedIndexPropertyObserver> propertyObserver;
@property (copy, nonatomic) NSArray *segmentImageNames;
@property (copy, nonatomic) NSArray *accessibilityInfoSegments;
@property (nonatomic) long long trackingMode;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)setMenu:(id)a0 forSegment:(long long)a1;
- (id)menuForSegment:(long long)a0;
- (void)action:(id)a0;
- (void)prepareItem;

@end
