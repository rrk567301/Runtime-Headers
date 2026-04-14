@class NSString;
@protocol UINSAccessibilityInfo, NSUIImage;

@interface UINSPopupButtonMenuItem : NSMenuItem <UINSPopupButtonMenuItem>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) id<NSUIImage> helperImage;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;

- (id)init;
- (void).cxx_destruct;

@end
