@class NSString;

@interface MADMultiModalInputTextSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)initWithText:(id)a0;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
