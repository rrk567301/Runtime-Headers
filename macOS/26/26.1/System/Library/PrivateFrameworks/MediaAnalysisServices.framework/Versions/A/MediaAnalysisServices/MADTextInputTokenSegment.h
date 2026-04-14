@class NSArray;

@interface MADTextInputTokenSegment : MADTextInputSegment

@property (readonly, nonatomic) NSArray *tokenIDs;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenIDs:(id)a0;

@end
