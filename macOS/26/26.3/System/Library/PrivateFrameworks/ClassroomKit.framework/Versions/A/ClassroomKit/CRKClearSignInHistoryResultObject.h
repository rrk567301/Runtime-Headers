@interface CRKClearSignInHistoryResultObject : CATTaskResultObject

@property (nonatomic) unsigned long long countOfRemovedRecords;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
