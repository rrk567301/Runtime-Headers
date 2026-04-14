@class NSArray;

@interface CRKFetchChaptersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *chapters;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
