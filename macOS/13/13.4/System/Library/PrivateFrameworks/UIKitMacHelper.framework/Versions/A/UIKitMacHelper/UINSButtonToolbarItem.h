@class NSString, NSButton;
@protocol UINSAccessibilityInfo, NSUIImage;

@interface UINSButtonToolbarItem : UINSToolbarItem <UINSButtonToolbarItem> {
    NSButton *_button;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) id<NSUIImage> helperImage;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)action:(id)a0;
- (void)prepareItem;

@end
