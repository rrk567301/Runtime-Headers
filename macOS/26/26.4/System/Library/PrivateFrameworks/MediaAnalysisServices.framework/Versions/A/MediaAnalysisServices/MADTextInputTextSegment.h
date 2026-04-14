@class NSString;

@interface MADTextInputTextSegment : MADTextInputSegment

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
