@class NSArray, NSString;
@protocol UINSAccessibilityInfo;

@interface UINSGroupToolbarItem : UINSToolbarItem <UINSGroupToolbarItem>

@property (copy, nonatomic) NSArray *toolbarItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;

@end
