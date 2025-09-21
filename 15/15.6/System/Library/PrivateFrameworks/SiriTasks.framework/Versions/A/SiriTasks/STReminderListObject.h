@class NSString;

@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}

+ (char)supportsSecureCoding;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)_aceContextObjectValue;
- (id)_aceValue;

@end
