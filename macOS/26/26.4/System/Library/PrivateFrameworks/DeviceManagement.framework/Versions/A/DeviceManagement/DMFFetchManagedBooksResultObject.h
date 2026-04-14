@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *books;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBooks:(id)a0;

@end
