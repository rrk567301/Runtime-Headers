@class NSString;
@protocol NSSecureCoding, NSCopying;

@interface ABRemoteLabeledValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *identifier;
@property (copy) NSString *label;
@property (copy) id<NSCopying, NSSecureCoding> value;

+ (id)labeledValueWithLabel:(id)a0 inArray:(id)a1;
+ (id)labeledValueWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
