@class NSString, NSNumber;

@interface PRSConversion : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *outputUnit;
@property (readonly) NSNumber *outputValue;
@property (readonly) NSString *localizedOutputValue;
@property (readonly) NSString *localizedOutputUnit;
@property (readonly) NSString *localizedOutputValueAndUnit;

- (id)category;
- (id)groupName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUnit:(id)a0 value:(id)a1 localizedValue:(id)a2 localizedUnit:(id)a3 localizedOutputValueAndUnit:(id)a4;

@end
