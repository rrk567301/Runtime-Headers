@class NSArray;

@interface CRKFetchChaptersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *chapters;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
