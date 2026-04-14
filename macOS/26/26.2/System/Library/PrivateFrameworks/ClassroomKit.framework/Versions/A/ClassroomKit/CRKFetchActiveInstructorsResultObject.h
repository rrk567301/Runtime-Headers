@class NSArray;

@interface CRKFetchActiveInstructorsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *instructors;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
