@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *courses;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
