@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *books;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBooks:(id)a0;

@end
