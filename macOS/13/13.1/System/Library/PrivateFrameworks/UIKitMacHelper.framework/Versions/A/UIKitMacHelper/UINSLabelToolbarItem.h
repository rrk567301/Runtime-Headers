@class NSString, NSTextField;
@protocol UINSAccessibilityInfo;

@interface UINSLabelToolbarItem : UINSToolbarItem <UINSLabelToolbarItem> {
    NSTextField *_textField;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)prepareItem;

@end
