@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *books;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBooks:(id)a0;

@end
