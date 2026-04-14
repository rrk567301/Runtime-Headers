@class NSString;

@interface STReminderListObject : STSiriModelObject {
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (id)_aceValue;

@end
