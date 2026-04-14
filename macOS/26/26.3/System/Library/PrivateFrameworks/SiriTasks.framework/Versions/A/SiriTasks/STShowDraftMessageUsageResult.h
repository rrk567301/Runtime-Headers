@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

@property (nonatomic) long long resultCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_resultDescription;

@end
