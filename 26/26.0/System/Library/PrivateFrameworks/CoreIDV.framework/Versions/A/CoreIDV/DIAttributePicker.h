@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding> {
    NSArray *_pickerItems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DIAttributePickerItem *defaultValue;
@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic, getter=getCurrentValue) DIAttributePickerItem *currentValue;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
