@class NSArray;

@interface CRKSaveSignInHistoryResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *history;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
