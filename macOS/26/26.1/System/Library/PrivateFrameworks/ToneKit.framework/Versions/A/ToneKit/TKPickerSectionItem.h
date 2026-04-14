@class NSString;

@interface TKPickerSectionItem : TKPickerItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
