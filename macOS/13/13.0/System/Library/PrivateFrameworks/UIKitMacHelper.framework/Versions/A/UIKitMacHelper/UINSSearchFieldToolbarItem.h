@class NSString;
@protocol UINSAccessibilityInfo;

@interface UINSSearchFieldToolbarItem : UINSToolbarItem <UINSSearchFieldToolbarItem>

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

@end
