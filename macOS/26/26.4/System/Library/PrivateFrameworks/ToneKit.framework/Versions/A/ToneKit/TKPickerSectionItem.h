@class NSString;

@interface TKPickerSectionItem : TKPickerItem

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
