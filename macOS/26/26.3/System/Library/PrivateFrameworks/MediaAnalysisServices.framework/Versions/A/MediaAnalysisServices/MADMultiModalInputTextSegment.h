@class NSString;

@interface MADMultiModalInputTextSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)initWithText:(id)a0;
- (long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
