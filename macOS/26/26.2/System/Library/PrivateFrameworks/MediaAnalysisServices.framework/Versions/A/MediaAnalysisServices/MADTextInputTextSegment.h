@class NSString;

@interface MADTextInputTextSegment : MADTextInputSegment

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)description;

@end
