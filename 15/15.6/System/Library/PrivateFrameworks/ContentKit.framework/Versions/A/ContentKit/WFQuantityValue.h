@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDecimalNumber *magnitude;
@property (readonly, copy, nonatomic) NSString *unitString;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMagnitude:(id)a0 unitString:(id)a1;

@end
