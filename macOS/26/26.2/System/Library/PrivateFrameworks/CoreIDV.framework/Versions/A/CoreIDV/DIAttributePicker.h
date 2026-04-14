@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding> {
    NSArray *_pickerItems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DIAttributePickerItem *defaultValue;
@property (copy, nonatomic) NSArray *pickerItems;
@property (copy, nonatomic, getter=getCurrentValue) DIAttributePickerItem *currentValue;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
