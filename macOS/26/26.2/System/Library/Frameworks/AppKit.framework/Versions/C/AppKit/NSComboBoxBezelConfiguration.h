@interface NSComboBoxBezelConfiguration : NSTextFieldBezelConfiguration

@property (nonatomic) BOOL isDisclosureButtonBordered;
@property (nonatomic) BOOL isDisclosureButtonPressed;

+ (id)neutralConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
