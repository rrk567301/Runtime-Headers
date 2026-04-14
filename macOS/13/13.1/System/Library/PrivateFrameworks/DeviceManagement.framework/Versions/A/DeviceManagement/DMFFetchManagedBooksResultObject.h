@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *books;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBooks:(id)a0;

@end
