@class NSArray;

@interface MADTextInputTokenSegment : MADTextInputSegment

@property (readonly, nonatomic) NSArray *tokenIDs;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTokenIDs:(id)a0;

@end
