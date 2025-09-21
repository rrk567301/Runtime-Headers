@class NSString;

@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;

- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)_aceValue;

@end
