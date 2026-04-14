@class NSNumber, NSSet;

@interface MLNumericConstraint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minNumber;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSSet *enumeratedNumbers;

+ (id)numericConstraintWithEnumeratedNumbers:(id)a0;
+ (id)numericConstraintWithMinNumber:(id)a0 maxNumber:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
