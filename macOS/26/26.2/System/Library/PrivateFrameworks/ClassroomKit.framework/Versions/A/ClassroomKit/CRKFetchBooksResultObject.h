@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *books;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
