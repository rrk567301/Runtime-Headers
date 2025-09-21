@class NSString;

@interface TypistKeyplane : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char isLetters;
@property (nonatomic) char isAlphabeticPlane;
@property (nonatomic) char isShiftKeyplane;
@property (nonatomic) char usesAutoShift;
@property (nonatomic) char ignoresShiftState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
