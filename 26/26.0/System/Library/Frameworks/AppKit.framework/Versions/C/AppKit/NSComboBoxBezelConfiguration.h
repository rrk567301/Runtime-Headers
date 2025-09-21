@interface NSComboBoxBezelConfiguration : NSTextFieldBezelConfiguration

@property (nonatomic) long long disclosureButtonInteractionState;
@property (nonatomic) BOOL isDisclosureButtonBordered;
@property (nonatomic) BOOL isDisclosureButtonPressed;

+ (id)neutralConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
