@class NSNumber, NSSet;

@interface MLNumericConstraint : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minNumber;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSSet *enumeratedNumbers;

+ (id)numericConstraintWithEnumeratedNumbers:(id)a0;
+ (id)numericConstraintWithMinNumber:(id)a0 maxNumber:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
