@class NSArray;

@interface CRKFetchActiveInstructorsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *instructors;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
