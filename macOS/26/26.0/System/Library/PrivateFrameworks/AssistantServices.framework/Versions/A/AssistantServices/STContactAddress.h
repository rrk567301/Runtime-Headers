@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {
    long long _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}

+ (BOOL)supportsSecureCoding;

- (id)contactIdentifier;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1 contactIdentifier:(id)a2 contactInternalGUID:(id)a3;
- (id)_aceContextObjectValue;
- (id)contactInternalGUID;

@end
