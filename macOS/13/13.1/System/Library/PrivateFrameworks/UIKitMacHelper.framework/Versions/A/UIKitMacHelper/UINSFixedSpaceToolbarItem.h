@class NSString, NSView;
@protocol UINSAccessibilityInfo;

@interface UINSFixedSpaceToolbarItem : UINSToolbarItem <UINSFixedSpaceToolbarItem> {
    NSView *_customSpace;
}

@property (nonatomic) double width;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

@end
