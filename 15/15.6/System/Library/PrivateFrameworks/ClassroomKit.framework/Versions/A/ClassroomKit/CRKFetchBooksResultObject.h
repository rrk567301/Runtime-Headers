@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *books;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
