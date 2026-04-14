@class NSArray;

@interface MADTextInputTokenSegment : MADTextInputSegment

@property (readonly, nonatomic) NSArray *tokenIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTokenIDs:(id)a0;

@end
