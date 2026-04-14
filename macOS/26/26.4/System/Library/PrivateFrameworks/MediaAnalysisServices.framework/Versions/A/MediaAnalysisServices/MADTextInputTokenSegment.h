@class NSArray;

@interface MADTextInputTokenSegment : MADTextInputSegment

@property (readonly, nonatomic) NSArray *tokenIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTokenIDs:(id)a0;

@end
