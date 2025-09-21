@class NSString;

@interface TKPickerSectionItem : TKPickerItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
